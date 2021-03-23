// HttpStatusReasons.inc
// =====================
// Include file for use in Construct_Object in classes via #Include
//
// Creates a String array property pasReasons and populates it with the standard
// HTTP status reasion text for each status.
//
// HTTP Response Codes taken from:
//   https://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml
//
//==============================================================================
// Date       Author Comments
// ========== ====== ===========================================================
// 03/08/2018 MJP    Created
//==============================================================================

Property String[] pasReasons
String[] asReasons

Move "Continue"                        to asReasons[100]
Move "Switching Protocols"             to asReasons[101]
Move "Processing"                      to asReasons[102]
Move "Early Hints"                     to asReasons[103]
Move "OK"                              to asReasons[200]
Move "Created"                         to asReasons[201]
Move "Accepted"                        to asReasons[202]
Move "Non-Authoritative Information"   to asReasons[203]
Move "No Content"                      to asReasons[204]
Move "Reset Content"                   to asReasons[205]
Move "Partial Content"                 to asReasons[206]
Move "Multi-Status"                    to asReasons[207]
Move "Already Reported"                to asReasons[208]
Move "IM Used"                         to asReasons[226]
Move "Multiple Choices"                to asReasons[300]
Move "Moved Permanently"               to asReasons[301]
Move "Found"                           to asReasons[302]
Move "See Other"                       to asReasons[303]
Move "Not Modified"                    to asReasons[304]
Move "Use Proxy"                       to asReasons[305]
Move "Temporary Redirect"              to asReasons[307]
Move "Permanent Redirect"              to asReasons[308]
Move "Bad Request"                     to asReasons[400]
Move "Unauthorized"                    to asReasons[401]
Move "Payment Required"                to asReasons[402]
Move "Forbidden"                       to asReasons[403]
Move "Not Found"                       to asReasons[404]
Move "Method Not Allowed"              to asReasons[405]
Move "Not Acceptable"                  to asReasons[406]
Move "Proxy Authentication Required"   to asReasons[407]
Move "Request Timeout"                 to asReasons[408]
Move "Conflict"                        to asReasons[409]
Move "Gone"                            to asReasons[410]
Move "Length Required"                 to asReasons[411]
Move "Precondition Failed"             to asReasons[412]
Move "Payload Too Large"               to asReasons[413]
Move "URI Too Long"                    to asReasons[414]
Move "Unsupported Media Type"          to asReasons[415]
Move "Range Not Satisfiable"           to asReasons[416]
Move "Expectation Failed"              to asReasons[417]
Move "Misdirected Request"             to asReasons[421]
Move "Unprocessable Entity"            to asReasons[422]
Move "Locked"                          to asReasons[423]
Move "Failed Dependency"               to asReasons[424]
Move "Upgrade Required"                to asReasons[426]
Move "Precondition Required"           to asReasons[428]
Move "Too Many Requests"               to asReasons[429]
Move "Request Header Fields Too Large" to asReasons[431]
Move "Unavailable For Legal Reasons"   to asReasons[451]
Move "Internal Server Error"           to asReasons[500]
Move "Not Implemented"                 to asReasons[501]
Move "Bad Gateway"                     to asReasons[502]
Move "Service Unavailable"             to asReasons[503]
Move "Gateway Timeout"                 to asReasons[504]
Move "HTTP Version Not Supported"      to asReasons[505]
Move "Variant Also Negotiates"         to asReasons[506]
Move "Insufficient Storage"            to asReasons[507]
Move "Loop Detected"                   to asReasons[508]
Move "Not Extended"                    to asReasons[510]
Move "Network Authentication Required" to asReasons[511]

Set pasReasons                         to asReasons
        