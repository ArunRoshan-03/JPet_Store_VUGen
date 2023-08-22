TC_08_select_item_id()
{

	lr_think_time(52);
lr_start_transaction("TC_08_select_item_id");

	web_url("Catalog.action_5",
		"URL=https://petstore.octoperf.com/actions/Catalog.action?viewItem=&itemId={P_random_iteam_id}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewProduct=&productId={P_product_id}",
		"Snapshot=t79.inf",
		"Mode=HTML",
		LAST);
lr_end_transaction("TC_08_select_item_id", LR_AUTO);

	return 0;
}
