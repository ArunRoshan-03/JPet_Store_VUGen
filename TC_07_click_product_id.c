TC_07_click_product_id()
{

	lr_think_time(34);
lr_start_transaction("TC_07_click_product_id");

/*Correlation comment - Do not change!  Original value='EST-16' Name ='C_item_id' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_item_id",
		"LB=workingItemId=",
		"RB=\"",
		"Ordinal=All",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Catalog.action_4", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={P_product_id}", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);
		random_iteam_id=lr_paramarr_random("C_item_id");
		lr_param_sprintf("P_random_iteam_id","%s",random_iteam_id);
lr_end_transaction("TC_07_click_product_id", LR_AUTO);

	return 0;
}
