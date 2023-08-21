TC_12_click_confirm_button()
{

	lr_think_time(24);

	web_url("Order.action_3", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrder=&confirmed=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Order.action", 
		"Snapshot=t84.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
