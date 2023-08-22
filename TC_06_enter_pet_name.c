TC_06_enter_pet_name()
{

	lr_think_time(36);
lr_start_transaction("TC_06_enter_pet_name");

/*Correlation comment - Do not change!  Original value='FL-DLH-02"' Name ='C_product_Id' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_product_Id",
		"LB=productId=",
		"RB=\">",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/Catalog.action*",
		LAST);

	web_submit_data("Catalog.action_3",
		"Action=https://petstore.octoperf.com/actions/Catalog.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId={P_Random_pet_categories}",
		"Snapshot=t77.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=keyword", "Value={P_random_pet_name}", ENDITEM,
		"Name=searchProducts", "Value=Search", ENDITEM,
		"Name=_sourcePage", "Value={C_select_pet_sourcePage}", ENDITEM,
		"Name=__fp", "Value={C_select_pet_fp}", ENDITEM,
		LAST);
		lr_param_sprintf("P_product_id", "%s", lr_eval_string("{C_product_Id}"));

lr_end_transaction("TC_06_enter_pet_name", LR_AUTO);
	return 0;
}