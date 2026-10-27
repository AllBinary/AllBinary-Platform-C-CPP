
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterfaceFactoryInterface.h>

      
#include <org/allbinary/business/user/commerce/money/payment/gateway/modules/gateway/PaymentGatewayDomNodeFactoryInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/io/path/AbPathData.h>

      
#include <org/allbinary/logic/string/regex/replace/Replace.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/types/BasicPaymentTypeUtil.h"

class BasicPaymentType
            : public Object
         {

    private: std::string name;

    private: std::string value;

    private: PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface;

    private: PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface;

protected: BasicPaymentType(std::string paymentMethod){
this->init(paymentMethod);
    
}


protected: BasicPaymentType(std::string paymentMethod, PaymentGatewayInterfaceFactoryInterface* paymentGatewayInterfaceFactoryInterface, PaymentGatewayDomNodeFactoryInterface* paymentGatewayDomNodeFactoryInterface){
this->init(paymentMethod);
    
this->paymentGatewayInterfaceFactoryInterface= paymentGatewayInterfaceFactoryInterface;
    
this->paymentGatewayDomNodeFactoryInterface= paymentGatewayDomNodeFactoryInterface;
    
}


    private: void init(std::string paymentMethod){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    

    std::string UNDERSCORE = "_";;
    
hashMap->put(CommonSeps::getInstance()->SPACE, UNDERSCORE);
    
hashMap->put(AbPathData::getInstance()->EXTENSION_SEP, UNDERSCORE);
    
hashMap->put("-", UNDERSCORE);
    

    Replace* replace = new Replace(hashMap);;
    
this->name= replace->all(paymentMethod);
    
this->value= paymentMethod;
    
BasicPaymentTypeUtil::getInstance()->add(this);
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getValue(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->value;
    
}


                //@Throws(Exception.constructor)
            
    public: PaymentGatewayInterfaceFactoryInterface* getPaymentGatewayInterfaceFactoryInterface(){

                        if(this->paymentGatewayInterfaceFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("PaymentGatewayInterfaceFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: PaymentGatewayDomNodeFactoryInterface* getPaymentGatewayDomNodeFactoryInterface(){

                        if(this->paymentGatewayDomNodeFactoryInterface == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw new Exception("PaymentGatewayDomNodeFactoryInterface is Null");
                    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentGatewayDomNodeFactoryInterface;
    
}


    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();;
    
}


    public: BasicArrayList* toVector(){

    BasicArrayList* vector = new BasicArrayListD();;
    
vector->add(this->name);
    
vector->add(this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return vector;
    
}


    public: HashMap<Object*, Object*>* toHashMap(){

    HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();;
    
hashMap->put(PaymentGatewayData::NAME.toString(), this->name);
    
hashMap->put(PaymentGatewayData::VALUE.toString(), this->value);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

