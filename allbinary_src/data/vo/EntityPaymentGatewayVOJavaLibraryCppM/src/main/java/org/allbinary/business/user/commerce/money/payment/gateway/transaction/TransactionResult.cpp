
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
        



            #include "../../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TransactionResultInterface.h"
#include "PaymentTransactionKeysFactory.h"

class TransactionResult
            : public Object
        : public TransactionResultInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: HashMap<any, any> keyValuePairs;

    private: std::string result;

public: TransactionResult(std::string result){

        try {
            this->result= result;
    

    Tokenizer tokenizer = Tokenizer(CommonSeps::getInstance().AMPERSAND);;
    

    BasicArrayList tokens = tokenizer.getTokensFromString(result, BasicArrayListD());;
    

    Tokenizer tokenizer2 = Tokenizer(CommonSeps::getInstance().EQUALS);;
    

    Hashtable<any, any> hashtable = tokenizer2.getTokens(tokens);;
    
this->keyValuePairs.putAll(hashtable);
    

                //: 
} catch(e) 
            {

    std::string exceptionMessage = "TransactionResult Constructor Failed";;
    
this->logUtil.putF(exceptionMessage, this, this->commonStrings.CONSTRUCTOR);
    
}

}


public: TransactionResult(HashMap<any, any> keyValuePairs){
keyValuePairs= keyValuePairs;
    
this->result= "Needs to have the hashmap converted to string for other constructor";
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->result;
    
}


    public: HashMap<any, any> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs;
    
}


    private: Vector getAllPossibleKeys(){

    PaymentTransactionKeysFactory paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    Vector verisignResponseKeys = Vector();;
    
verisignResponseKeys.add(paymentTransactionKeysFactory.RESULT.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.PNREF.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.RESPMSG.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.AUTHCODE.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.AVSADDR.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.AVSZIP.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.ORIGRESULT.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.STATUS.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.FRAUDCODE.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.FRAUDMSG.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.ERRCODE.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.SCORE.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.REASON1.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.REASON2.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.REASON3.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION1.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION2.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION3.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION4.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION5.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION6.toString());
    
verisignResponseKeys.add(paymentTransactionKeysFactory.EXCEPTION7.toString());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return verisignResponseKeys;
    
}


    public: Vector getValues(){

    Vector keyVector = this->getAllPossibleKeys();;
    

    Vector valueVector = Vector();;
    

    int32_t size = keyVector.length;;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string key = keyVector.get(i) as string;;
    

                        if(this->keyValuePairs.containsKey(key))
                        
                                    {
                                    valueVector.add(this->keyValuePairs.get(key));
    

                                    }
                                
                        else {
                            
    StringUtil stringUtil = StringUtil::getInstance();;
    
valueVector.add(stringUtil.EMPTY_STRING);
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return valueVector;
    
}


    public: std::string getPnRef(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().PNREF.toString()) as string;
    
}


    public: std::string getRespMsg(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().RESPMSG.toString()) as string;
    
}


    public: std::string getResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().RESULT.toString()) as string;
    
}


    public: std::string getScore(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().SCORE.toString()) as string;
    
}


    public: std::string getStatus(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().STATUS.toString()) as string;
    
}


    public: std::string getFraudCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().FRAUDCODE.toString()) as string;
    
}


    public: std::string getFraudMsg(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().FRAUDMSG.toString()) as string;
    
}


    public: std::string getOrigResult(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().ORIGRESULT.toString()) as string;
    
}


    public: std::string getAvsAddr(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().AVSADDR.toString()) as string;
    
}


    public: std::string getAvsZip(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().AVSZIP.toString()) as string;
    
}


    public: std::string getErrCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().ERRCODE.toString()) as string;
    
}


    public: std::string getException1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION1.toString()) as string;
    
}


    public: std::string getException2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION2.toString()) as string;
    
}


    public: std::string getException3(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION3.toString()) as string;
    
}


    public: std::string getException4(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION4.toString()) as string;
    
}


    public: std::string getException5(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION5.toString()) as string;
    
}


    public: std::string getException6(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION6.toString()) as string;
    
}


    public: std::string getException7(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().EXCEPTION7.toString()) as string;
    
}


    public: std::string getReason1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().REASON1.toString()) as string;
    
}


    public: std::string getReason2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().REASON2.toString()) as string;
    
}


    public: std::string getReason3(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->keyValuePairs.get(PaymentTransactionKeysFactory::getInstance().REASON3.toString()) as string;
    
}


};

            

