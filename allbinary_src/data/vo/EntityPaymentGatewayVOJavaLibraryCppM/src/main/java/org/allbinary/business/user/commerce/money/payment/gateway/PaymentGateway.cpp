
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGateway.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontData.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/UserData.h>

      
#include <org/allbinary/business/user/commerce/money/payment/PaymentData.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayInterface.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayData.h"
#include "org/allbinary/business/user/commerce/money/payment/gateway/PaymentGatewayPrimaryKey.h"


PaymentGateway::PaymentGateway(HashMap<Object*, Object*>* hashMap){
this->getFormData(hashMap);
    
}


    auto PaymentGateway::getFormData(HashMap<Object*, Object*>* hashMap) -> void{

    StringUtil* stringUtil = StringUtil::getInstance();;
    

    std::string empty = stringUtil->EMPTY_STRING;;
    
this->storeName= JavaBoxes::unbox<std::string>(hashMap->get(StoreFrontData::getInstance()->NAME->toString()));
    
this->name= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::NAME->toString()));
    
this->enable= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(EntryData::getInstance()->ENABLE->toString())));
    
this->paymentMethod= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(PaymentData::METHOD->toString())));
    
this->mode= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::MODE->toString())));
    
this->testProtocol= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::TESTPROTOCOL->toString())));
    
this->testServer= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::TESTSERVER->toString())));
    
this->testPort= stringUtil->getNonNull(JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::TESTPORT->toString())));
    
this->testPath= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::TESTPATH->toString()));
    

                        if(false)
                        this->testPath= empty;
                                
this->serverProtocol= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SERVERPROTOCOL->toString()));
    

                        if(false)
                        this->serverProtocol= empty;
                                
this->server= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SERVER->toString()));
    

                        if(false)
                        this->server= empty;
                                
this->serverPort= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SERVERPORT->toString()));
    

                        if(false)
                        this->serverPort= empty;
                                
this->serverPath= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SERVERPATH->toString()));
    

                        if(false)
                        this->serverPath= empty;
                                
this->userName= JavaBoxes::unbox<std::string>(hashMap->get(UserData::USERNAME->toString()));
    

                        if(false)
                        this->userName= empty;
                                
this->password= JavaBoxes::unbox<std::string>(hashMap->get(UserData::PASSWORD->toString()));
    

                        if(false)
                        this->password= empty;
                                
this->timeout= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::TIMEOUT->toString()));
    

                        if(false)
                        this->timeout= empty;
                                
this->proxyProtocol= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYPROTOCOL->toString()));
    

                        if(false)
                        this->proxyProtocol= empty;
                                
this->proxyServer= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYSERVER->toString()));
    

                        if(false)
                        this->proxyServer= empty;
                                
this->proxyPort= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYPORT->toString()));
    

                        if(false)
                        this->proxyPort= empty;
                                
this->proxyPath= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYPATH->toString()));
    

                        if(false)
                        this->proxyPath= empty;
                                
this->proxyUserName= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYUSERNAME->toString()));
    

                        if(false)
                        this->proxyUserName= empty;
                                
this->proxyPassword= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYPASSWORD->toString()));
    

                        if(false)
                        this->proxyPassword= empty;
                                
this->proxyTimeout= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::PROXYTIMEOUT->toString()));
    

                        if(false)
                        this->proxyTimeout= empty;
                                
this->special1= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL1->toString()));
    

                        if(false)
                        this->special1= empty;
                                
this->special2= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL2->toString()));
    

                        if(false)
                        this->special2= empty;
                                
this->special3= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL3->toString()));
    

                        if(false)
                        this->special3= empty;
                                
this->special4= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL4->toString()));
    

                        if(false)
                        this->special4= empty;
                                
this->special5= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL5->toString()));
    

                        if(false)
                        this->special5= empty;
                                
this->special6= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL6->toString()));
    

                        if(false)
                        this->special6= empty;
                                
this->special7= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL7->toString()));
    

                        if(false)
                        this->special7= empty;
                                
this->special8= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL8->toString()));
    

                        if(false)
                        this->special8= empty;
                                
this->special9= JavaBoxes::unbox<std::string>(hashMap->get(PaymentGatewayData::SPECIAL9->toString()));
    

                        if(false)
                        this->special9= empty;
                                
this->lastModified= JavaBoxes::unbox<std::string>(hashMap->get(EntryData::getInstance()->LASTMODIFIED->toString()));
    

                        if(false)
                        this->lastModified= empty;
                                
this->timeEntered= JavaBoxes::unbox<std::string>(hashMap->get(EntryData::getInstance()->TIMECREATED->toString()));
    

                        if(false)
                        this->timeEntered= empty;
                                
}


    auto PaymentGateway::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->storeName;
    
}


    auto PaymentGateway::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


    auto PaymentGateway::getEnable() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->enable;
    
}


    auto PaymentGateway::getPaymentMethod() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->paymentMethod;
    
}


    auto PaymentGateway::getMode() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mode;
    
}


    auto PaymentGateway::getTestProtocol() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testProtocol;
    
}


    auto PaymentGateway::getTestServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testServer;
    
}


    auto PaymentGateway::getTestPort() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testPort;
    
}


    auto PaymentGateway::getTestPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->testPath;
    
}


    auto PaymentGateway::getServerProtocol() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->serverProtocol;
    
}


    auto PaymentGateway::getServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->server;
    
}


    auto PaymentGateway::getServerPort() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->serverPort;
    
}


    auto PaymentGateway::getServerPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->serverPath;
    
}


    auto PaymentGateway::getUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->userName;
    
}


    auto PaymentGateway::getPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->password;
    
}


    auto PaymentGateway::getProxyProtocol() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyProtocol;
    
}


    auto PaymentGateway::getProxyServer() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyServer;
    
}


    auto PaymentGateway::getProxyPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyPath;
    
}


    auto PaymentGateway::getProxyPort() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyPort;
    
}


    auto PaymentGateway::getProxyUserName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyUserName;
    
}


    auto PaymentGateway::getProxyPassword() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyPassword;
    
}


    auto PaymentGateway::getTimeout() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeout;
    
}


    auto PaymentGateway::getProxyTimeout() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->proxyTimeout;
    
}


    auto PaymentGateway::getSpecial1() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special1;
    
}


    auto PaymentGateway::getSpecial2() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special2;
    
}


    auto PaymentGateway::getSpecial3() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special3;
    
}


    auto PaymentGateway::getSpecial4() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special4;
    
}


    auto PaymentGateway::getSpecial5() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special5;
    
}


    auto PaymentGateway::getSpecial6() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special6;
    
}


    auto PaymentGateway::getSpecial7() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special7;
    
}


    auto PaymentGateway::getSpecial8() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special8;
    
}


    auto PaymentGateway::getSpecial9() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->special9;
    
}


    auto PaymentGateway::getLastModified() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->lastModified;
    
}


    auto PaymentGateway::getTimeEntered() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->timeEntered;
    
}


    auto PaymentGateway::setEnable(std::string value) -> void{
this->enable= value;
    
}


    auto PaymentGateway::setStoreName(std::string value) -> void{
this->storeName= value;
    
}


    auto PaymentGateway::setName(std::string value) -> void{
this->name= value;
    
}


    auto PaymentGateway::setPaymentMethod(std::string value) -> void{
this->paymentMethod= value;
    
}


    auto PaymentGateway::setMode(std::string value) -> void{
this->mode= value;
    
}


    auto PaymentGateway::setTestProtocol(std::string value) -> void{
this->testProtocol= value;
    
}


    auto PaymentGateway::setTestServer(std::string value) -> void{
this->testServer= value;
    
}


    auto PaymentGateway::setTestPort(std::string value) -> void{
this->testPort= value;
    
}


    auto PaymentGateway::setTestPath(std::string value) -> void{
this->testPath= value;
    
}


    auto PaymentGateway::setServerProtocol(std::string value) -> void{
this->serverProtocol= value;
    
}


    auto PaymentGateway::setServer(std::string value) -> void{
this->server= value;
    
}


    auto PaymentGateway::setServerPort(std::string value) -> void{
this->serverPort= value;
    
}


    auto PaymentGateway::setServerPath(std::string value) -> void{
this->serverPath= value;
    
}


    auto PaymentGateway::setTimeout(std::string value) -> void{
this->timeout= value;
    
}


    auto PaymentGateway::setUserName(std::string value) -> void{
this->userName= value;
    
}


    auto PaymentGateway::setPassword(std::string value) -> void{
this->password= value;
    
}


    auto PaymentGateway::setProxyProtocol(std::string value) -> void{
this->proxyProtocol= value;
    
}


    auto PaymentGateway::setProxyServer(std::string value) -> void{
this->proxyServer= value;
    
}


    auto PaymentGateway::setProxyPort(std::string value) -> void{
this->proxyPort= value;
    
}


    auto PaymentGateway::setProxyPath(std::string value) -> void{
this->proxyPath= value;
    
}


    auto PaymentGateway::setProxyUserName(std::string value) -> void{
this->proxyUserName= value;
    
}


    auto PaymentGateway::setProxyPassword(std::string value) -> void{
this->proxyPassword= value;
    
}


    auto PaymentGateway::setProxyTimeout(std::string value) -> void{
this->proxyTimeout= value;
    
}


    auto PaymentGateway::setSpecial1(std::string value) -> void{
this->special1= value;
    
}


    auto PaymentGateway::setSpecial2(std::string value) -> void{
this->special2= value;
    
}


    auto PaymentGateway::setSpecial3(std::string value) -> void{
this->special3= value;
    
}


    auto PaymentGateway::setSpecial4(std::string value) -> void{
this->special4= value;
    
}


    auto PaymentGateway::setSpecial5(std::string value) -> void{
this->special5= value;
    
}


    auto PaymentGateway::setSpecial6(std::string value) -> void{
this->special6= value;
    
}


    auto PaymentGateway::setSpecial7(std::string value) -> void{
this->special7= value;
    
}


    auto PaymentGateway::setSpecial8(std::string value) -> void{
this->special8= value;
    
}


    auto PaymentGateway::setSpecial9(std::string value) -> void{
this->special9= value;
    
}


    auto PaymentGateway::setLastModified(std::string value) -> void{
this->lastModified= value;
    
}


    auto PaymentGateway::setTimeEntered(std::string value) -> void{
this->timeEntered= value;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGateway::toHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toHashMap(true);;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGateway::toHashMap(bool isEncrypted) -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* paymentGatewayHashMap = StdUtil::getInstance()->createHashMap();;
    
paymentGatewayHashMap->put(EntryData::getInstance()->ENABLE, this->enable);
    
paymentGatewayHashMap->put(StoreFrontData::getInstance()->NAME->toString(), this->storeName);
    
paymentGatewayHashMap->put(PaymentGatewayData::NAME->toString(), this->getName());
    
paymentGatewayHashMap->put(PaymentData::METHOD->toString(), this->paymentMethod);
    
paymentGatewayHashMap->put(PaymentGatewayData::MODE->toString(), this->mode);
    
paymentGatewayHashMap->put(PaymentGatewayData::TESTPROTOCOL->toString(), this->testProtocol);
    
paymentGatewayHashMap->put(PaymentGatewayData::TESTSERVER->toString(), this->testServer);
    
paymentGatewayHashMap->put(PaymentGatewayData::TESTPORT->toString(), this->testPort);
    
paymentGatewayHashMap->put(PaymentGatewayData::TESTPATH->toString(), this->testPath);
    
paymentGatewayHashMap->put(PaymentGatewayData::SERVERPROTOCOL->toString(), this->serverProtocol);
    
paymentGatewayHashMap->put(PaymentGatewayData::SERVER->toString(), this->server);
    
paymentGatewayHashMap->put(PaymentGatewayData::SERVERPORT->toString(), this->serverPort);
    
paymentGatewayHashMap->put(PaymentGatewayData::SERVERPATH->toString(), this->serverPath);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt* superCrypt = new SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap->put(UserData::USERNAME->toString(), superCrypt->encrypt(this->userName));
    
paymentGatewayHashMap->put(UserData::PASSWORD->toString(), superCrypt->encrypt(this->password));
    

                                    }
                                
                        else {
                            paymentGatewayHashMap->put(UserData::USERNAME->toString(), this->userName);
    
paymentGatewayHashMap->put(UserData::PASSWORD->toString(), this->password);
    

                        }
                            
paymentGatewayHashMap->put(PaymentGatewayData::TIMEOUT->toString(), this->timeout);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYPROTOCOL->toString(), this->proxyProtocol);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYSERVER->toString(), this->proxyServer);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYPORT->toString(), this->proxyPort);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYPATH->toString(), this->proxyPath);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYUSERNAME->toString(), this->proxyUserName);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYPASSWORD->toString(), this->proxyPassword);
    
paymentGatewayHashMap->put(PaymentGatewayData::PROXYTIMEOUT->toString(), this->proxyTimeout);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt* superCrypt = new SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL1->toString(), superCrypt->encrypt(this->special1));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL2->toString(), superCrypt->encrypt(this->special2));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL3->toString(), superCrypt->encrypt(this->special3));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL4->toString(), superCrypt->encrypt(this->special4));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL5->toString(), superCrypt->encrypt(this->special5));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL6->toString(), superCrypt->encrypt(this->special6));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL7->toString(), superCrypt->encrypt(this->special7));
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL8->toString(), superCrypt->encrypt(this->special8));
    

                                    }
                                
                        else {
                            paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL1->toString(), this->special1);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL2->toString(), this->special2);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL3->toString(), this->special3);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL4->toString(), this->special4);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL5->toString(), this->special5);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL6->toString(), this->special6);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL7->toString(), this->special7);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL8->toString(), this->special8);
    
paymentGatewayHashMap->put(PaymentGatewayData::SPECIAL9->toString(), this->special9);
    

                        }
                            
paymentGatewayHashMap->put(EntryData::getInstance()->LASTMODIFIED->toString(), this->lastModified);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return paymentGatewayHashMap;
    
}


    auto PaymentGateway::toVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->toVector(true);;
    
}


    auto PaymentGateway::toVector(bool isEncrypted) -> BasicArrayList*{

    BasicArrayList* updateVector = new BasicArrayListD();;
    
updateVector->add(this->enable);
    
updateVector->add(this->storeName);
    
updateVector->add(this->getName());
    
updateVector->add(this->paymentMethod);
    
updateVector->add(this->mode);
    
updateVector->add(this->testProtocol);
    
updateVector->add(this->testServer);
    
updateVector->add(this->testPort);
    
updateVector->add(this->testPath);
    
updateVector->add(this->serverProtocol);
    
updateVector->add(this->server);
    
updateVector->add(this->serverPort);
    
updateVector->add(this->serverPath);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt* superCrypt = new SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
updateVector->add(superCrypt->encrypt(this->userName));
    
updateVector->add(superCrypt->encrypt(this->password));
    

                                    }
                                
                        else {
                            updateVector->add(this->userName);
    
updateVector->add(this->password);
    

                        }
                            
updateVector->add(this->timeout);
    
updateVector->add(this->proxyProtocol);
    
updateVector->add(this->proxyServer);
    
updateVector->add(this->proxyPort);
    
updateVector->add(this->proxyPath);
    
updateVector->add(this->proxyUserName);
    
updateVector->add(this->proxyPassword);
    
updateVector->add(this->proxyTimeout);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt* superCrypt = new SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
updateVector->add(superCrypt->encrypt(this->special1));
    
updateVector->add(superCrypt->encrypt(this->special2));
    
updateVector->add(superCrypt->encrypt(this->special3));
    
updateVector->add(superCrypt->encrypt(this->special4));
    
updateVector->add(superCrypt->encrypt(this->special5));
    
updateVector->add(superCrypt->encrypt(this->special6));
    
updateVector->add(superCrypt->encrypt(this->special7));
    
updateVector->add(superCrypt->encrypt(this->special8));
    
updateVector->add(superCrypt->encrypt(this->special9));
    

                                    }
                                
                        else {
                            updateVector->add(this->special1);
    
updateVector->add(this->special2);
    
updateVector->add(this->special3);
    
updateVector->add(this->special4);
    
updateVector->add(this->special5);
    
updateVector->add(this->special6);
    
updateVector->add(this->special7);
    
updateVector->add(this->special8);
    
updateVector->add(this->special9);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return updateVector;
    
}


                //@Throws(Exception.constructor)
            
    auto PaymentGateway::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new PaymentGatewayPrimaryKey(this->getStoreName(), this->getName());
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_MONEY_PAYMENT_GATEWAY_PAYMENTGATEWAY_CPP
