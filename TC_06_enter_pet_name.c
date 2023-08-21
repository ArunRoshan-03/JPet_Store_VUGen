TC_06_enter_pet_name()
{

	lr_think_time(36);
lr_start_transaction("TC_06_enter_pet_name");

	web_submit_data("Catalog.action_3",
		"Action=https://petstore.octoperf.com/actions/Catalog.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS",
		"Snapshot=t77.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=keyword", "Value=persian", ENDITEM,
		"Name=searchProducts", "Value=Search", ENDITEM,
		"Name=_sourcePage", "Value={C_select_pet_sourcePage}", ENDITEM,
		"Name=__fp", "Value={C_select_pet_fp}", ENDITEM,
		LAST);
lr_end_transaction("TC_06_enter_pet_name", LR_AUTO);

	return 0;
}
