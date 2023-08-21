TC_click_product_id()
{

	lr_think_time(34);

	web_url("Catalog.action_4", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FL-DLH-02", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t78.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
