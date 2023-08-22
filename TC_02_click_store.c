TC_02_click_store()
{

	lr_think_time(26);
	web_set_max_html_param_len("8192");
	lr_start_transaction("TC_02_click_store");

/*Correlation comment - Do not change!  Original value='373541FDAA6FA4D360035D9893FD4AD7' Name ='jsessionid' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=jsessionid",
		"LB=jsessionid=",
		"RB=\"><img src",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_url("Catalog.action", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/", 
		"Snapshot=t72.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("TC_02_click_store", LR_AUTO);
	
	return 0;
}
