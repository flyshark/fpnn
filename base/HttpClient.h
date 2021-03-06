#ifndef FPNN_HTTPCLIENT_H
#define FPNN_HTTPCLIENT_H

#include <string>

namespace fpnn {
namespace HttpClient{
#define HTTP_CLIENT_DEFAULT_TIMEOUT 5
	int Post(const std::string& url, const std::string& data, std::string& resp, int timeout = HTTP_CLIENT_DEFAULT_TIMEOUT);
	int Get(const std::string& url, std::string& resp, int timeout = HTTP_CLIENT_DEFAULT_TIMEOUT);

	std::string uriEncode(const std::string& uri);
	std::string uriDecode(const std::string& uri);
	std::string uriDecode2(const std::string& uri);

}
}

#endif
