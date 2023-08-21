TC_03_click_sigin_link()
{

	lr_think_time(9);

	web_url("Account.action;jsessionid=373541FDAA6FA4D360035D9893FD4AD7", 
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid=373541FDAA6FA4D360035D9893FD4AD7?signonForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t74.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
