
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
    
verisignResponseKeys->add(paymentTransactionKeysFactory->RESULT->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->PNREF->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->RESPMSG->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->AUTHCODE->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->AVSADDR->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->AVSZIP->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->ORIGRESULT->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->STATUS->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->FRAUDCODE->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->FRAUDMSG->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->ERRCODE->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->SCORE->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->REASON1->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->REASON2->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->REASON3->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION1->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION2->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION3->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION4->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION5->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION6->toString());
    
verisignResponseKeys->add(paymentTransactionKeysFactory->EXCEPTION7->toString());
    



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
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->PNREF->toString()));
    
}


    auto TransactionResult::getRespMsg() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->RESPMSG->toString()));
    
}


    auto TransactionResult::getResult() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->RESULT->toString()));
    
}


    auto TransactionResult::getScore() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->SCORE->toString()));
    
}


    auto TransactionResult::getStatus() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->STATUS->toString()));
    
}


    auto TransactionResult::getFraudCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->FRAUDCODE->toString()));
    
}


    auto TransactionResult::getFraudMsg() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->FRAUDMSG->toString()));
    
}


    auto TransactionResult::getOrigResult() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->ORIGRESULT->toString()));
    
}


    auto TransactionResult::getAvsAddr() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->AVSADDR->toString()));
    
}


    auto TransactionResult::getAvsZip() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->AVSZIP->toString()));
    
}


    auto TransactionResult::getErrCode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->ERRCODE->toString()));
    
}


    auto TransactionResult::getException1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION1->toString()));
    
}


    auto TransactionResult::getException2() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION2->toString()));
    
}


    auto TransactionResult::getException3() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION3->toString()));
    
}


    auto TransactionResult::getException4() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION4->toString()));
    
}


    auto TransactionResult::getException5() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION5->toString()));
    
}


    auto TransactionResult::getException6() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION6->toString()));
    
}


    auto TransactionResult::getException7() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->EXCEPTION7->toString()));
    
}


    auto TransactionResult::getReason1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->REASON1->toString()));
    
}


    auto TransactionResult::getReason2() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->REASON2->toString()));
    
}


    auto TransactionResult::getReason3() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaBoxes::unbox<std::string>(this->keyValuePairs->get(PaymentTransactionKeysFactory::getInstance()->REASON3->toString()));
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_TRANSACTION_TRANSACTIONRESULT_CPP
