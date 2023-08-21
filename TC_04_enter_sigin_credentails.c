TC_04_enter_sigin_credentails()
{
	lr_start_transaction("TC_04_enter_sigin_credentails");

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
	lr_end_transaction("TC_04_enter_sigin_credentails", LR_AUTO);

	return 0;
}
