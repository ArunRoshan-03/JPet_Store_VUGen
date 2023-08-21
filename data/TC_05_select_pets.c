TC_05_select_pets()
{

	lr_think_time(25);

	web_url("Catalog.action_2", 
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
