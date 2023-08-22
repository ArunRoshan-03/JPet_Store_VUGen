TC_04_enter_sigin_credentails()
{
	lr_start_transaction("TC_04_enter_sigin_credentails");

/*Correlation comment - Do not change!  Original value='BIRDS' Name ='C_pet_name' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_pet_categories",
		"LB=categoryId=",
		"RB=\" shape",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_submit_data("Account.action",
		"Action=https://petstore.octoperf.com/actions/Account.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"Snapshot=t75.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=username", "Value={p_username}", ENDITEM,
		"Name=password", "Value={p_password}", ENDITEM,
		"Name=signon", "Value=Login", ENDITEM,
		"Name=_sourcePage", "Value={C_sourcePage}", ENDITEM,
		"Name=__fp", "Value={C_fp}", ENDITEM,
		LAST);
		random_pet_categories=lr_paramarr_random("C_pet_categories");
		lr_param_sprintf("P_Random_pet_categories","%s",random_pet_categories);	
	lr_end_transaction("TC_04_enter_sigin_credentails", LR_AUTO);

	return 0;
}