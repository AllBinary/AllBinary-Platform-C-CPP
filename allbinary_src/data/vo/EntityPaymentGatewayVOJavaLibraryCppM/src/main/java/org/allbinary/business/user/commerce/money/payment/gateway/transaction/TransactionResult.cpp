
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResult.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/tokens/Tokenizer.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/TransactionResultInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/transaction/PaymentTransactionKeysFactory.h"


TransactionResult::TransactionResult(std::string result) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){

        try {
            this->result= result;
    

    Tokenizer* tokenizer = new Tokenizer(CommonSeps::getInstance()->AMPERSAND);;
    

    BasicArrayList* tokens = tokenizer->getTokensFromString(result, new BasicArrayListD());;
    

    Tokenizer* tokenizer2 = new Tokenizer(CommonSeps::getInstance()->EQUALS);;
    

    ABHashtable<Object*, Object*>* hashtable = tokenizer2->getTokens(tokens);;
    
this->keyValuePairs->putAll(hashtable);
    

                //: 
} catch(Exception& e) 
            {

    std::string exceptionMessage = "TransactionResult Constructor Failed";;
    
this->logUtil->putF(exceptionMessage, this, this->commonStrings->CONSTRUCTOR);
    
}

}


TransactionResult::TransactionResult(HashMap<Object*, Object*>* keyValuePairs) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
keyValuePairs= keyValuePairs;
    
this->result= "Needs to have the hashmap converted to string for other constructor";
    
}


    auto TransactionResult::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->result;
    
}


    auto TransactionResult::toHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->keyValuePairs;
    
}


    auto TransactionResult::getAllPossibleKeys() -> BasicArrayList*{

    PaymentTransactionKeysFactory* paymentTransactionKeysFactory = PaymentTransactionKeysFactory::getInstance();;
    

    BasicArrayList* verisignResponseKeys = new BasicArrayListD();;
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->RESULT));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->PNREF));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->RESPMSG));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->AUTHCODE));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->AVSADDR));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->AVSZIP));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->ORIGRESULT));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->STATUS));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->FRAUDCODE));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->FRAUDMSG));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->ERRCODE));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->SCORE));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->REASON1));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->REASON2));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->REASON3));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION1));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION2));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION3));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION4));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION5));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION6));
    
verisignResponseKeys->add(JavaString::valueOf(paymentTransactionKeysFactory->EXCEPTION7));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return verisignResponseKeys;
    
}


    auto TransactionResult::getValues() -> BasicArrayList*{

    BasicArrayList* keyVector = this->getAllPossibleKeys();;
    

    BasicArrayList* valueVector = new BasicArrayListD();;
    

    int32_t size = keyVector->size();;
    




                        for (
    int32_t i = 0;i < size; i++)
        {

    std::string key = JavaBoxes::unbox<std::string>(keyVector->get(i));;
    

                        if(this->keyValuePairs->containsKey(key))
                        
                                    {
                                    valueVector->add(this->keyValuePairs->get(key));
    

                                    }
                                
                        else {
                            
    StringUtil* stringUtil = StringUtil::getInstance();;
    
valueVector->add(stringUtil->EMPTY_STRING);
    

                        }
                            
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return valueVector;
    
}


    auto TransactionResult::getPnRef() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->PNREF)));
    
}


    auto TransactionResult::getRespMsg() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->RESPMSG)));
    
}


    auto TransactionResult::getResult() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->RESULT)));
    
}


    auto TransactionResult::getScore() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->SCORE)));
    
}


    auto TransactionResult::getStatus() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->STATUS)));
    
}


    auto TransactionResult::getFraudCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->FRAUDCODE)));
    
}


    auto TransactionResult::getFraudMsg() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->FRAUDMSG)));
    
}


    auto TransactionResult::getOrigResult() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->ORIGRESULT)));
    
}


    auto TransactionResult::getAvsAddr() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->AVSADDR)));
    
}


    auto TransactionResult::getAvsZip() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->AVSZIP)));
    
}


    auto TransactionResult::getErrCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->ERRCODE)));
    
}


    auto TransactionResult::getException1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION1)));
    
}


    auto TransactionResult::getException2() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION2)));
    
}


    auto TransactionResult::getException3() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION3)));
    
}


    auto TransactionResult::getException4() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION4)));
    
}


    auto TransactionResult::getException5() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION5)));
    
}


    auto TransactionResult::getException6() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION6)));
    
}


    auto TransactionResult::getException7() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->EXCEPTION7)));
    
}


    auto TransactionResult::getReason1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->REASON1)));
    
}


    auto TransactionResult::getReason2() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->REASON2)));
    
}


    auto TransactionResult::getReason3() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(JavaString::valueOf(PaymentTransactionKeysFactory::getInstance()->REASON3)));
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_CPP
