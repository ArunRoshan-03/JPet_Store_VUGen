TC_04_enter_sigin_credentails()
{

	web_submit_data("Account.action", 
		"Action=https://petstore.octoperf.com/actions/Account.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Account.action;jsessionid=373541FDAA6FA4D360035D9893FD4AD7?signonForm=", 
		"Snapshot=t75.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=j2ee", ENDITEM, 
		"Name=password", "Value=j2ee", ENDITEM, 
		"Name=signon", "Value=Login", ENDITEM, 
		"Name=_sourcePage", "Value=Xy3jCIqLrcy9JFQaAbPYDLOnJ6V0E4x08YnuR7NF4mdIATKF1ZwDT15YoHosUWldVeJZviwi8i0tsYtAKGvnYVsHLNtDjJ0IzdP4yy_RqlY=", ENDITEM, 
		"Name=__fp", "Value=9uKkLqemL7MX0bRXZq9q-EDYexj610IeoWxG5KMm3YBQJM63oB1Z73VZ0QxoafkT", ENDITEM, 
		LAST);

	return 0;
}
