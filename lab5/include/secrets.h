const char *ssid = "UPB-Guest"; // TODO: Modificați cu SSID-ul rețelei voastre
const char *password = "";      // TODO: Modificați cu parola rețelei voastre
const char *mqtt_server = "10.41.54.87"; // TODO: Modificați cu IP-ul
                                         // calculatorului (ip addr / ipconfig)
const int mqtt_port = 8883;

const char *ca_cert =
"-----BEGIN CERTIFICATE-----\n" \
"MIIDETCCAfmgAwIBAgIUPLzS569jrDUJKeUteALyJikFLhkwDQYJKoZIhvcNAQEL\n" \
"BQAwGDEWMBQGA1UEAwwNU1MtUHJvamVjdC1DQTAeFw0yNjAzMzAxNzQ2MTBaFw0z\n" \
"NjAzMjcxNzQ2MTBaMBgxFjAUBgNVBAMMDVNTLVByb2plY3QtQ0EwggEiMA0GCSqG\n" \
"SIb3DQEBAQUAA4IBDwAwggEKAoIBAQCqmBehU+KMYeIXI0zI9FJk59d0NRpjmNv/\n" \
"uoUsJV+DDfqTYLSkbJg+vmQZnzc4AJKn2rBzx8DhI/oXVykMpnGUpy2ZswdfA9bw\n" \
"E4dbQzA5Co+NbwQJSuz8gjKaK8yb/QgmpPB3jKzlGWeuLwXhq76PiinjDIqZUVJr\n" \
"lxVZITUV2yfV4nXQQUsp1kwqiTifmBjlQlKj1a6twdS9s3WRFsEaz3Tm1drWPRzK\n" \
"I5tdFpMTwtOQCzJOzsHeBlcVa4gy69BWI1+B8oHTuJhuQqDz3KssysC7tYopg5FL\n" \
"yY29j19jb7pVblbvVf3x4DIJRysxYK/ofPLtg9sOw6NjZcxjCsv7AgMBAAGjUzBR\n" \
"MB0GA1UdDgQWBBQGx6FKbFiL0+6eCAPYvy4I1XcHKjAfBgNVHSMEGDAWgBQGx6FK\n" \
"bFiL0+6eCAPYvy4I1XcHKjAPBgNVHRMBAf8EBTADAQH/MA0GCSqGSIb3DQEBCwUA\n" \
"A4IBAQBvR6lgdcdKkPdCR7AmToqHHmKC4ETo3v+1x66sUidNxp/klyLXj0pIGcjF\n" \
"UexfFMp6FPA1e9vJxhafIIrdQinFB41a8aTS3TyZUL+BylY/p2yaHEjeeG/c8kLg\n" \
"TKTlzppf2Pc7oUrEehbIOhMptNAb4j27DKwUdFEavqqovPJn00f7gsGWbPQ5vmBa\n" \
"NoeSUxa9i01k5igibwwRoism2Rl7PCleMS5zCKLtt78kIKGAEwS8/ET+xwfXwEAn\n" \
"7J+BZSUnBB2owlaVsqrjzXk9j0+dn4ia8mnPB7fB1r7WdUlpfMOZm9OvpiyciQ8w\n" \
"GkWqSFA3+kPtlKlrFLvwnzYvMlve\n" \
"-----END CERTIFICATE-----\n";

