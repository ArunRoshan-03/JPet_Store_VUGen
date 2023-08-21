TC_03_click_sigin_link()
{

	lr_think_time(9);
	lr_start_transaction("TC_03_click_sigin_link");

/*Correlation comment - Do not change!  Original value='Xy3jCIqLrcy9JFQaAbPYDLOnJ6V0E4x08YnuR7NF4mdIATKF1ZwDT15YoHosUWldVeJZviwi8i0tsYtAKGvnYVsHLNtDjJ0IzdP4yy_RqlY=' Name ='C_sourcePage' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_sourcePage",
		"LB=name=\"_sourcePage\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

/*Correlation comment - Do not change!  Original value='9uKkLqemL7MX0bRXZq9q-EDYexj610IeoWxG5KMm3YBQJM63oB1Z73VZ0QxoafkT' Name ='C_fp' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=C_fp",
		"LB=name=\"__fp\" value=\"",
		"RB=\"",
		"Ordinal=2",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);

	web_url("Account.action;jsessionid={jsessionid}",
		"URL=https://petstore.octoperf.com/actions/Account.action;jsessionid={jsessionid}?signonForm=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action",
		"Snapshot=t74.inf",
		"Mode=HTML",
		LAST);
	lr_end_transaction("TC_03_click_sigin_link", LR_AUTO);

	return 0;
}
