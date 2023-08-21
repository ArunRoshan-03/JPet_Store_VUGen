TC_13_click_signout_link()
{
lr_start_transaction("TC_12_click_confirm_button");

	web_url("Account.action_2", 
		"URL=https://petstore.octoperf.com/actions/Account.action?signoff=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Snapshot=t85.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("TC_12_click_confirm_button", LR_AUTO);

	return 0;
}