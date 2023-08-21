TC_01_launch()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");
	lr_start_transaction("TC_01_launch");

	web_url("petstore.octoperf.com", 
		"URL=https://petstore.octoperf.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t59.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("TC_01_launch", LR_AUTO);

	return 0;
}
