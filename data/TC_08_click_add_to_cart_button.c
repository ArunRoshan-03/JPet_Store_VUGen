TC_08_click_add_to_cart_button()
{

	lr_think_time(25);

	web_url("Cart.action", 
		"URL=https://petstore.octoperf.com/actions/Cart.action?addItemToCart=&workingItemId=EST-16", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-16", 
		"Snapshot=t81.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
