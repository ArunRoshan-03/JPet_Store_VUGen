TC_06_enter_pet_name()
{

	lr_think_time(36);

	web_submit_data("Catalog.action_3", 
		"Action=https://petstore.octoperf.com/actions/Catalog.action", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://petstore.octoperf.com/actions/Catalog.action?viewCategory=&categoryId=CATS", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=keyword", "Value=persian", ENDITEM, 
		"Name=searchProducts", "Value=Search", ENDITEM, 
		"Name=_sourcePage", "Value=fRmLND7caO_vnYW42SdM1AQuYt9-Tf0S02GUB8ZB0fFa7mPQYVxkz7-dhCSXkAd1DdZ0gEE9Vna7rpXARR8V8pZFQaGJNU27FnZ-f8dxUgI=", ENDITEM, 
		"Name=__fp", "Value=IavJk0ZV2OoD3mJekLGY-6mbls7GWcvZykgnzGhHr6B0TPLVti4OZCNDXvkygu4n", ENDITEM, 
		LAST);

	return 0;
}
