
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicPaymentTypeUtil.h"

class BasicPaymentType
            : public Object
         {
        

    private: name: string;

    private: value: string;

    private: paymentGatewayInterfaceFactoryInterface: PaymentGatewayInterfaceFactoryInterface;

    private: paymentGatewayDomNodeFactoryInterface: PaymentGatewayDomNodeFactoryInterface;

protected constructor (string paymentMethod){

            super();
        this.init(paymentMethod);
    
}


protected constructor (string paymentMethod, PaymentGatewayInterfaceFactoryInterface paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface paymentGatewayDomNodeFactoryInterface){

            super();
        this.init(paymentMethod);
    
this.paymentGatewayInterfaceFactoryInterface= paymentGatewayInterfaceFactoryInterface;
    
this.paymentGatewayDomNodeFactoryInterface= paymentGatewayDomNodeFactoryInterface;
    
}


    init(string paymentMethod){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    

    UNDERSCORE: string = "_";;
    
hashMap!.put(CommonSeps.getInstance()!.SPACE, UNDERSCORE);
    
hashMap!.put(AbPathData.getInstance()!.EXTENSION_SEP, UNDERSCORE);
    
hashMap!.put("-", UNDERSCORE);
    

    replace: Replace = new Replace(hashMap);;
    
this.name= replace.all(paymentMethod);
    
this.value= paymentMethod;
    
BasicPaymentTypeUtil.getInstance()!.add(this);
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.value;
    
}


                //@Throws(Exception.constructor)
            
    public PaymentGatewayInterfaceFactoryInterface getPaymentGatewayInterfaceFactoryInterface(){

                        if(this.paymentGatewayInterfaceFactoryInterface == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("PaymentGatewayInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentGatewayInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public PaymentGatewayDomNodeFactoryInterface getPaymentGatewayDomNodeFactoryInterface(){

                        if(this.paymentGatewayDomNodeFactoryInterface == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("PaymentGatewayDomNodeFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.paymentGatewayDomNodeFactoryInterface;
    
}


    public any getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();;
    
}


    public Vector toVector(){

    vector: Vector = new Vector();;
    
vector.add(this.name);
    
vector.add(this.value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(PaymentGatewayData.NAME.toString(), this.name);
    
hashMap!.put(PaymentGatewayData.VALUE.toString(), this.value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

