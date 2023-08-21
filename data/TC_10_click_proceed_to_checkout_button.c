TC_10_click_proceed_to_checkout_button()
{

	lr_think_time(38);

	web_url("Order.action", 
		"URL=https://petstore.octoperf.com/actions/Order.action?newOrderForm=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-16", 
		"Snapshot=t82.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
