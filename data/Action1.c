Action1()
{

	web_url("canonical.html", 
		"URL=http://detectportal.firefox.com/canonical.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/success.txt?ipv4", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_custom_request("r3.o.lencr.org", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x047\\xBB\\x9F\\xB5\\x82\\xC5\\x06>=\\x94K\\x0E\\x8E\\xFA%\\xFE\\xFB", 
		LAST);

	web_custom_request("r3.o.lencr.org_2", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xAD\no9\\xA9\\xEBP?5\\x9Ep\\xB8Jxr=\\x1B", 
		LAST);

	web_custom_request("r3.o.lencr.org_3", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t52.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xAD\no9\\xA9\\xEBP?5\\x9Ep\\xB8Jxr=\\x1B", 
		LAST);

	web_url("tiles", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t53.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("r3.o.lencr.org_4", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t54.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04y\\xC8\\x98Q\\xA0\\xD9n\\x12Wa\n\\xFF{\\xBA^\\xD7U", 
		LAST);

	web_custom_request("r3.o.lencr.org_5", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t55.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x04\\xF8\\x1A$\\xCC+P\\x86\\xEF\\x03R\\xE3=\\x03\\x14\\xA2\\x17P", 
		LAST);

	lr_think_time(4);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t56.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06'd\\xBD\\xAC\\x97O,\nP\\xA8l\\xF3\\xF9\\x00\\xA6", 
		EXTRARES, 
		"Url=https://content-signature-2.cdn.mozilla.net/chains/remote-settings.content-signature.mozilla.org-2023-09-19-11-14-05.chain", "Referer=", ENDITEM, 
		LAST);

	web_url("v1", 
		"URL=https://firefox.settings.services.mozilla.com/v1/", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t57.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("_ga_MQ7767QQQW=GS1.1.1692364627.1.0.1692364635.0.0.0; DOMAIN=aus5.mozilla.org");

	web_add_cookie("_ga=GA1.2.907056927.1692364628; DOMAIN=aus5.mozilla.org");

	web_url("update.xml", 
		"URL=https://aus5.mozilla.org/update/6/Firefox/116.0.3/20230815173142/WINNT_x86_64-msvc-x64/en-US/release/Windows_NT%2010.0.0.0.19045.2364%20(x64)/ISET:SSE4_2,MEM:7847/default/default/update.xml?force=1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t58.inf", 
		"Mode=HTML", 
		LAST);

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("ocsp.digicert.com_2", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t60.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xC8\\x03s\\xB9\\x06C\\xF6\\x1E\\xA1`\\xE2\\xBE}\\x03\\x00", 
		LAST);

	web_custom_request("ocsp.digicert.com_3", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t61.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x06\\xC8\\x03s\\xB9\\x06C\\xF6\\x1E\\xA1`\\xE2\\xBE}\\x03\\x00", 
		LAST);

	web_custom_request("r3.o.lencr.org_6", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x12\\x03\\xC5\\xB5l9\ry\\xB2\\xB1\\x08\\xDAEz\\xE7\\xBE\\xA3\\x0E\\xF8", 
		LAST);

	web_custom_request("9202a7f7-615b-4109-91fc-cb52fa2c6cdb", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/events/1/9202a7f7-615b-4109-91fc-cb52fa2c6cdb", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t63.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":63,\"start_time\":\"2023-08-21T19:16+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"reason\":\"startup\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\",\"type\":\"nimbus-rollout\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\"}},\""
		"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"4331d05f-bced-426c-98ba-bc7b8d870645\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"enrollmentId\":\""
		"4634dde7-98c7-40ea-949f-3c908ee20795\",\"type\":\"nimbus-nimbus\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"app_display_version\":\"116.0.3\",\"os\":\"Windows\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_build\":\"20230815173142\",\"app_channel\":\"release\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\",\"windows_build_number\":19045},\"metrics\":{\"quantity\":{\""
		"urlbar.pref_max_results\":10},\"uuid\":{\"legacy.telemetry.client_id\":\"eae14f16-8932-4a97-8ada-7cd07ba522fd\"},\"boolean\":{\"urlbar.pref_suggest_topsites\":true}},\"events\":[{\"timestamp\":0,\"category\":\"serp\",\"name\":\"engagement\",\"extra\":{\"target\":\"incontent_searchbox\",\"action\":\"clicked\",\"impression_id\":\"c1a86746-f7a1-46de-b7cb-8179d962f1a5\"}},{\"timestamp\":2340,\"category\":\"serp\",\"name\":\"engagement\",\"extra\":{\"impression_id\":\""
		"c1a86746-f7a1-46de-b7cb-8179d962f1a5\",\"target\":\"incontent_searchbox\",\"action\":\"submitted\"}},{\"timestamp\":3315,\"category\":\"serp\",\"name\":\"impression\",\"extra\":{\"provider\":\"google\",\"shopping_tab_displayed\":\"true\",\"is_shopping_page\":\"false\",\"partner_code\":\"firefox-b-d\",\"impression_id\":\"b5a37e67-fe82-4349-be97-e8cda058343d\",\"tagged\":\"true\",\"source\":\"follow_on_from_refine_on_incontent_search\"}},{\"timestamp\":6324,\"category\":\"serp\",\"name\":\""
		"abandonment\",\"extra\":{\"reason\":\"navigation\",\"impression_id\":\"b5a37e67-fe82-4349-be97-e8cda058343d\"}}]}", 
		LAST);

	web_websocket_connect("ID=0", 
		"URI=wss://push.services.mozilla.com/", 
		"Origin=wss://push.services.mozilla.com/", 
		"SecWebSocketExtensions=permessage-deflate", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);

	web_websocket_send("ID=0", 
		"Buffer={\"messageType\":\"hello\",\"broadcasts\":{\"remote-settings/monitor_changes\":\"\\\"1692608234465\\\"\"},\"use_webpush\":true}", 
		"IsBinary=0", 
		LAST);

	web_custom_request("967ed797-e178-4b2a-b82d-294faac26fa2", 
		"URL=https://incoming.telemetry.mozilla.org/submit/messaging-system/undesired-events/1/967ed797-e178-4b2a-b82d-294faac26fa2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t65.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=UTF-8", 
		"Body={\"experiments\":{\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\"},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\"},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\"},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\"},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\"},\"bug-1848748-pref-page-load-time-patch-release-116-117\":{\"branch\":\"reset-to-false\"}},\""
		"locale\":\"en-US\",\"version\":\"116.0.3\",\"release_channel\":\"release\",\"event\":\"ASR_RS_NO_MESSAGES\",\"message_id\":\"n/a\",\"event_context\":\"whats-new-panel\",\"addon_version\":\"20230815173142\",\"impression_id\":\"{309f36cc-6348-4bb8-9724-81715552739d}\"}", 
		LAST);

	web_custom_request("f94c0dbf-7601-4cca-8905-44b3785e0728", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/f94c0dbf-7601-4cca-8905-44b3785e0728", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t66.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":274,\"start_time\":\"2023-08-21T18:48+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"reason\":\"newtab_session_end\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\",\"type\":\"nimbus-rollout\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\"}}"
		",\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\",\"type\":\"nimbus-rollout\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\",\"type\":\"nimbus-nimbus\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\""
		"4331d05f-bced-426c-98ba-bc7b8d870645\",\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"app_display_version\":\"116.0.3\",\"os\":\"Windows\",\"app_build\":\"20230815173142\",\"windows_build_number\":19045,\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\"},\"metrics\":{\"uuid\":{\""
		"legacy.telemetry.client_id\":\"eae14f16-8932-4a97-8ada-7cd07ba522fd\"},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\",\"search.engine.default.engine_id\":\"google-b-d\",\"search.engine.private.engine_id\":\"\"},\"string_list\":{\"newtab.blocked_sponsors\":[]},\"boolean\":{\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":true,\"topsites.enabled\":true,\"newtab.search.enabled\":true,\"pocket.enabled\""
		":true,\"pocket.is_signed_in\":false},\"quantity\":{\"topsites.rows\":1}},\"events\":[{\"timestamp\":0,\"category\":\"newtab\",\"name\":\"opened\",\"extra\":{\"source\":\"about:home\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}},{\"timestamp\":27,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"is_sponsored\":\"false\",\"position\":\"4\"}},{\"timestamp\":29,\"category\":\"topsites\",\"name\":\""
		"impression\",\"extra\":{\"is_sponsored\":\"false\",\"position\":\"2\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}},{\"timestamp\":30,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"is_sponsored\":\"false\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"position\":\"3\"}},{\"timestamp\":32,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"position\":\"5\",\"is_sponsored\":\"false\",\"newtab_visit_id\":\""
		"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}},{\"timestamp\":32,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"is_sponsored\":\"false\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"position\":\"7\"}},{\"timestamp\":34,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"is_sponsored\":\"false\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"position\":\"1\"}},{\"timestamp\":36,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":"
		"{\"is_sponsored\":\"false\",\"position\":\"6\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}},{\"timestamp\":37,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"position\":\"0\",\"is_sponsored\":\"false\",\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}},{\"timestamp\":296866,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"position\":\"1\",\"tile_id\":\"73588\",\"is_sponsored\":\"true\",\"newtab_visit_id\":\""
		"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"advertiser_name\":\"trivago\"}},{\"timestamp\":296874,\"category\":\"topsites\",\"name\":\"impression\",\"extra\":{\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\",\"advertiser_name\":\"amazon\",\"position\":\"0\",\"tile_id\":\"74357\",\"is_sponsored\":\"true\"}},{\"timestamp\":1152447,\"category\":\"newtab\",\"name\":\"closed\",\"extra\":{\"newtab_visit_id\":\"{2f79c175-a443-4c91-aca7-60781dfcf37e}\"}}]}", 
		LAST);

	web_custom_request("r3.o.lencr.org_7", 
		"URL=http://r3.o.lencr.org/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t67.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0S0Q0O0M0K0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14H\\xDA\\xC9\\xA0\\xFB+\\xD3-O\\xF0\\xDEh\\xD2\\xF5g\\xB75\\xF9\\xB3\\xC4\\x04\\x14\\x14.\\xB3\\x17\\xB7XV\\xCB\\xAEP\t@\\xE6\\x1F\\xAF\\x9D\\x8B\\x14\\xC2\\xC6\\x02\\x12\\x03\\xC5\\xB5l9\ry\\xB2\\xB1\\x08\\xDAEz\\xE7\\xBE\\xA3\\x0E\\xF8", 
		LAST);

	/*Connection ID 0 received buffer WebSocketReceive0*/

	web_custom_request("544c1b31-77b9-4b74-8b70-6cf83716e87b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/pageload/1/544c1b31-77b9-4b74-8b70-6cf83716e87b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t68.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":52,\"start_time\":\"2023-08-21T19:34+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"reason\":\"startup\"},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"first_run_date\":\"2022-12-02+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"app_build\":\"20230815173142\",\"app_channel\":\"release\",\"app_display_version\":\"116.0.3\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":19045},\"events\":[{\"timestamp\""
		":0,\"category\":\"perf\",\"name\":\"page_load\",\"extra\":{\"http_ver\":\"1\",\"load_time\":\"360\",\"same_origin_nav\":\"true\",\"load_type\":\"LINK\",\"response_time\":\"189\"}}]}", 
		LAST);

	web_custom_request("cff5d26f-4af4-4a71-910a-2f8167a46614", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/newtab/1/cff5d26f-4af4-4a71-910a-2f8167a46614", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t69.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":275,\"start_time\":\"2023-08-21T20:08+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"reason\":\"component_init\"},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"app_channel\":\"release\",\"app_build\":\"20230815173142\",\"architecture\":\"x86_64\",\"app_display_version\":\"116.0.3\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"windows_build_number\":19045,\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\""
		"first_run_date\":\"2022-12-02+05:30\"},\"metrics\":{\"string_list\":{\"newtab.blocked_sponsors\":[]},\"quantity\":{\"topsites.rows\":1},\"string\":{\"newtab.homepage_category\":\"enabled\",\"newtab.locale\":\"en-US\",\"newtab.newtab_category\":\"enabled\"},\"boolean\":{\"pocket.is_signed_in\":false,\"topsites.enabled\":true,\"pocket.enabled\":true,\"newtab.search.enabled\":true,\"pocket.sponsored_stories_enabled\":true,\"topsites.sponsored_enabled\":true}}}", 
		LAST);

	web_custom_request("41021e9e-472e-40f5-afb4-5346a7b2e46b", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/baseline/1/41021e9e-472e-40f5-afb4-5346a7b2e46b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t70.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":140,\"start_time\":\"2023-08-21T19:16+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"reason\":\"active\",\"experiments\":{\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"eb23cd2e-978a-4755-a72b-d39611a48817\"}},\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\",\"type\":\"nimbus-rollout\"}},\""
		"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"4331d05f-bced-426c-98ba-bc7b8d870645\"}},\"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\",\""
		"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"build_date\":\"1970-01-01T00:00:00+00:00\",\"first_run_date\":\"2022-12-02+05:30\",\"windows_build_number\":19045,\"client_id\":\"ac18ee09-27b6-4d69-b120-39af32374c86\",\"architecture\":\"x86_64\",\"os_version\":\"10.0\",\"app_build\":\"20230815173142\",\"os\":\"Windows\",\"app_display_version\":\"116.0.3\",\"app_channel\":\"release\"},\"metrics\":{\"labeled_counter\":{\""
		"glean.validation.pings_submitted\":{\"baseline\":1,\"events\":2,\"messaging-system\":1,\"newtab\":2,\"pageload\":2,\"top-sites\":2}},\"uuid\":{\"legacy.telemetry.client_id\":\"eae14f16-8932-4a97-8ada-7cd07ba522fd\"},\"datetime\":{\"glean.validation.first_run_hour\":\"2022-12-02T12+05:30\"},\"counter\":{\"browser.engagement.uri_count\":15,\"browser.engagement.active_ticks\":31}}}", 
		LAST);

	web_custom_request("048fda70-9f3f-4282-8974-c2bbe32b44f5", 
		"URL=https://incoming.telemetry.mozilla.org/submit/firefox-desktop/messaging-system/1/048fda70-9f3f-4282-8974-c2bbe32b44f5", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t71.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"ping_info\":{\"seq\":253,\"start_time\":\"2023-08-21T19:48+05:30\",\"end_time\":\"2023-08-21T20:08+05:30\",\"experiments\":{\"csv-import-release-rollout\":{\"branch\":\"enable-csv-import\",\"extra\":{\"type\":\"nimbus-rollout\",\"enrollmentId\":\"17e05982-916d-4ef0-a037-74d595cf0228\"}},\"pocket-newtab-existing-markets-tier-2-rollout\":{\"branch\":\"rollout\",\"extra\":{\"enrollmentId\":\"e45cf317-62c4-4684-ad82-39e142973108\",\"type\":\"nimbus-rollout\"}},\""
		"set-firefox-as-default-pdf-handler-on-windows-for-new-users-rollout\":{\"branch\":\"treatment\",\"extra\":{\"type\":\"nimbus-nimbus\",\"enrollmentId\":\"4634dde7-98c7-40ea-949f-3c908ee20795\"}},\"updated-import-infrequent-rollout-make-yourself-at-home-copy\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\"4331d05f-bced-426c-98ba-bc7b8d870645\",\"type\":\"nimbus-rollout\"}},\"serp-ad-telemetry-rollout\":{\"branch\":\"control\",\"extra\":{\"enrollmentId\":\""
		"eb23cd2e-978a-4755-a72b-d39611a48817\",\"type\":\"nimbus-rollout\"}}}},\"client_info\":{\"telemetry_sdk_build\":\"53.0.0\",\"windows_build_number\":19045,\"app_display_version\":\"116.0.3\",\"app_build\":\"20230815173142\",\"architecture\":\"x86_64\",\"os\":\"Windows\",\"os_version\":\"10.0\",\"app_channel\":\"release\",\"first_run_date\":\"2022-12-02+05:30\",\"build_date\":\"1970-01-01T00:00:00+00:00\"},\"metrics\":{\"text\":{\"messaging_system.message_id\":\"n/a\",\""
		"messaging_system.event_context\":\"\\\"whats-new-panel\\\"\"},\"uuid\":{\"messaging_system.impression_id\":\"309f36cc-6348-4bb8-9724-81715552739d\"},\"string\":{\"messaging_system.locale\":\"en-US\",\"messaging_system.addon_version\":\"20230815173142\",\"messaging_system.event\":\"ASR_RS_NO_MESSAGES\",\"messaging_system.ping_type\":\"undesired-events\"}}}", 
		LAST);

	return 0;
}
