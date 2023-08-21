TC_07_select_iteam_id()
{

	lr_think_time(52);

	web_url("Catalog.action_5", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId=EST-16", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId=FL-DLH-02", 
		"Snapshot=t79.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(5);

	web_url("tiles_2", 
		"URL=https://contile.services.mozilla.com/v1/tiles", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t80.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
