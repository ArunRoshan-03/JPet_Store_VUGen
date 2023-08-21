TC_09_click_add_to_cart_button()
{

	lr_think_time(25);
lr_start_transaction("TC_09_click_add_to_cart_button");

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-16", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-16", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);
lr_end_transaction("TC_09_click_add_to_cart_button", LR_AUTO);

	return 0;
}
