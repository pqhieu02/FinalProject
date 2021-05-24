#include "appdev.h"

void sendData(rock r) {
	CURL* curl;
	CURLcode res;
	char postdata[999];

	sprintf(postdata, "min=%d&max=%d&user=%s", r.min, r.max, r.rname);
	curl_global_init(CURL_GLOBAL_ALL);
	curl = curl_easy_init();
	if (curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://www.cc.puv.fi/~e2000581/testCurl.php");
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postdata);

		res = curl_easy_perform(curl);

		if (res != CURLE_OK) {	
			fprintf(stderr, "curl_easy_perform() failed %s\n",
				curl_easy_strerror(res));
		}
		curl_easy_cleanup(curl);
	}
	curl_global_cleanup();
}