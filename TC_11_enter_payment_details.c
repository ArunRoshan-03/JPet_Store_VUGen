TC_11_enter_payment_details()
{

	lr_think_time(51);
lr_start_transaction("TC_11_enter_payment_details");

	web_submit_data("Order.action_2",
		"Action=https://petstore.octoperf.com/actions/Order.action",
		"Method=POST",
		"RecContentType=text/html",
		"Referer=https://petstore.octoperf.com/actions/Order.action?newOrderForm=",
		"Snapshot=t83.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=order.cardType", "Value=Visa", ENDITEM,
		"Name=order.creditCard", "Value=999 9999 9999 9999", ENDITEM,
		"Name=order.expiryDate", "Value=12/03", ENDITEM,
		"Name=order.billToFirstName", "Value=ABC", ENDITEM,
		"Name=order.billToLastName", "Value=XYX", ENDITEM,
		"Name=order.billAddress1", "Value=901 San Antonio Road", ENDITEM,
		"Name=order.billAddress2", "Value=MS UCUP02-206", ENDITEM,
		"Name=order.billCity", "Value=Palo Alto", ENDITEM,
		"Name=order.billState", "Value=CA", ENDITEM,
		"Name=order.billZip", "Value=94303", ENDITEM,
		"Name=order.billCountry", "Value=USA", ENDITEM,
		"Name=newOrder", "Value=Continue", ENDITEM,
		"Name=_sourcePage", "Value={C_check_out_sourcePage}", ENDITEM,
		"Name=__fp", "Value={C_check_out_fp}", ENDITEM,
		LAST);
lr_end_transaction("TC_11_enter_payment_details", LR_AUTO);

	return 0;
}
