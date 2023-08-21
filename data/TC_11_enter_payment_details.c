TC_11_enter_payment_details()
{

	lr_think_time(51);

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
		"Name=_sourcePage", "Value=e_tu37zbpNmvraQHlpMdxRcIYwyJ-isVtDMyt9bxW8jE9vmgndmyS-jIbNHFF46t2Car_PwcoRZ6BjpTICZLDT8A8p9RRY126FlR5M-y_bw=", ENDITEM, 
		"Name=__fp", "Value=8ZszamgykpZapOy5btW7MNce1Qgb7fEiTjaEqUIqt4YNDHAei6eChVP8lQ_mV-XopFK69SWrMtNvZMKCspHby22DfiGXfIV4ccqPo7lBJCu0lBsSckmc2A==", ENDITEM, 
		LAST);

	return 0;
}
