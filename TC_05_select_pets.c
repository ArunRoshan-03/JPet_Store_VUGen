TC_05_select_pets()
{

	lr_think_time(25);
lr_start_transaction("TC_05_select_pets");

/*Correlation comment - Do not change!  Original value='fRmLND7caO_vnYW42SdM1AQuYt9-Tf0S02GUB8ZB0fFa7mPQYVxkz7-dhCSXkAd1DdZ0gEE9Vna7rpXARR8V8pZFQaGJNU27FnZ-f8dxUgI=' Name ='C_select_pet_sourcePage' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_select_pet_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='IavJk0ZV2OoD3mJekLGY-6mbls7GWcvZykgnzGhHr6B0TPLVti4OZCNDXvkygu4n' Name ='C_select_pet_fp' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_select_pet_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("TC_05_select_pets", LR_AUTO);

	return 0;
}
