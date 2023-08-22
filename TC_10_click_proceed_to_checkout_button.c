TC_10_click_proceed_to_checkout_button()
{

	lr_think_time(38);
lr_start_transaction("TC_10_click_proceed_to_checkout_button");

/*Correlation comment - Do not change!  Original value='e_tu37zbpNmvraQHlpMdxRcIYwyJ-isVtDMyt9bxW8jE9vmgndmyS-jIbNHFF46t2Car_PwcoRZ6BjpTICZLDT8A8p9RRY126FlR5M-y_bw=' Name ='C_check_out_sourcePage' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_check_out_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='8ZszamgykpZapOy5btW7MNce1Qgb7fEiTjaEqUIqt4YNDHAei6eChVP8lQ_mV-XopFK69SWrMtNvZMKCspHby22DfiGXfIV4ccqPo7lBJCu0lBsSckmc2A==' Name ='C_check_out_fp' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_check_out_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Order.action",
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId={P_random_iteam_id}",
		"Snapshot=t82.inf",
		"Mode=HTML",
		LAST);
lr_end_transaction("TC_10_click_proceed_to_checkout_button", LR_AUTO);

	return 0;
}
