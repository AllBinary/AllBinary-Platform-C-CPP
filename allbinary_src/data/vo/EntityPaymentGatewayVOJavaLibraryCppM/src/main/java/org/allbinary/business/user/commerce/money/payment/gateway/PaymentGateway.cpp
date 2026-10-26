
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
        #include "PaymentGatewayInterface.h"
#include "PaymentGatewayData.h"
#include "PaymentGatewayPrimaryKey.h"

class PaymentGateway
            : public Object
        : public PaymentGatewayInterface {

    private: std::string storeName;

    private: std::string name;

    private: std::string enable;

    private: std::string paymentMethod;

    private: std::string mode;

    private: std::string testProtocol;

    private: std::string testServer;

    private: std::string testPort;

    private: std::string testPath;

    private: std::string serverProtocol;

    private: std::string server;

    private: std::string serverPort;

    private: std::string serverPath;

    private: std::string timeout;

    private: std::string userName;

    private: std::string password;

    private: std::string proxyProtocol;

    private: std::string proxyServer;

    private: std::string proxyPort;

    private: std::string proxyPath;

    private: std::string proxyUserName;

    private: std::string proxyPassword;

    private: std::string proxyTimeout;

    private: std::string special1;

    private: std::string special2;

    private: std::string special3;

    private: std::string special4;

    private: std::string special5;

    private: std::string special6;

    private: std::string special7;

    private: std::string special8;

    private: std::string special9;

    private: std::string lastModified;

    private: std::string timeEntered;

public: PaymentGateway(HashMap<Object*, Object*> hashMap){
this->getFormData(hashMap);
    
}


    public: void getFormData(HashMap<Object*, Object*> hashMap){

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::string empty = stringUtil.EMPTY_STRING;;
    
this->storeName= hashMap.get(StoreFrontData::getInstance().NAME.toString());
    
this->name= hashMap.get(PaymentGatewayData::NAME.toString());
    
this->enable= stringUtil.getNonNull(hashMap.get(EntryData::getInstance().ENABLE.toString()));
    
this->paymentMethod= stringUtil.getNonNull(hashMap.get(PaymentData::METHOD.toString()));
    
this->mode= stringUtil.getNonNull(hashMap.get(PaymentGatewayData::MODE.toString()));
    
this->testProtocol= stringUtil.getNonNull(hashMap.get(PaymentGatewayData::TESTPROTOCOL.toString()));
    
this->testServer= stringUtil.getNonNull(hashMap.get(PaymentGatewayData::TESTSERVER.toString()));
    
this->testPort= stringUtil.getNonNull(hashMap.get(PaymentGatewayData::TESTPORT.toString()));
    
this->testPath= hashMap.get(PaymentGatewayData::TESTPATH.toString());
    

                        if(false)
                        this->testPath= empty;
                                
this->serverProtocol= hashMap.get(PaymentGatewayData::SERVERPROTOCOL.toString());
    

                        if(false)
                        this->serverProtocol= empty;
                                
this->server= hashMap.get(PaymentGatewayData::SERVER.toString());
    

                        if(false)
                        this->server= empty;
                                
this->serverPort= hashMap.get(PaymentGatewayData::SERVERPORT.toString());
    

                        if(false)
                        this->serverPort= empty;
                                
this->serverPath= hashMap.get(PaymentGatewayData::SERVERPATH.toString());
    

                        if(false)
                        this->serverPath= empty;
                                
this->userName= hashMap.get(UserData::USERNAME.toString());
    

                        if(false)
                        this->userName= empty;
                                
this->password= hashMap.get(UserData::PASSWORD.toString());
    

                        if(false)
                        this->password= empty;
                                
this->timeout= hashMap.get(PaymentGatewayData::TIMEOUT.toString());
    

                        if(false)
                        this->timeout= empty;
                                
this->proxyProtocol= hashMap.get(PaymentGatewayData::PROXYPROTOCOL.toString());
    

                        if(false)
                        this->proxyProtocol= empty;
                                
this->proxyServer= hashMap.get(PaymentGatewayData::PROXYSERVER.toString());
    

                        if(false)
                        this->proxyServer= empty;
                                
this->proxyPort= hashMap.get(PaymentGatewayData::PROXYPORT.toString());
    

                        if(false)
                        this->proxyPort= empty;
                                
this->proxyPath= hashMap.get(PaymentGatewayData::PROXYPATH.toString());
    

                        if(false)
                        this->proxyPath= empty;
                                
this->proxyUserName= hashMap.get(PaymentGatewayData::PROXYUSERNAME.toString());
    

                        if(false)
                        this->proxyUserName= empty;
                                
this->proxyPassword= hashMap.get(PaymentGatewayData::PROXYPASSWORD.toString());
    

                        if(false)
                        this->proxyPassword= empty;
                                
this->proxyTimeout= hashMap.get(PaymentGatewayData::PROXYTIMEOUT.toString());
    

                        if(false)
                        this->proxyTimeout= empty;
                                
this->special1= hashMap.get(PaymentGatewayData::SPECIAL1.toString());
    

                        if(false)
                        this->special1= empty;
                                
this->special2= hashMap.get(PaymentGatewayData::SPECIAL2.toString());
    

                        if(false)
                        this->special2= empty;
                                
this->special3= hashMap.get(PaymentGatewayData::SPECIAL3.toString());
    

                        if(false)
                        this->special3= empty;
                                
this->special4= hashMap.get(PaymentGatewayData::SPECIAL4.toString());
    

                        if(false)
                        this->special4= empty;
                                
this->special5= hashMap.get(PaymentGatewayData::SPECIAL5.toString());
    

                        if(false)
                        this->special5= empty;
                                
this->special6= hashMap.get(PaymentGatewayData::SPECIAL6.toString());
    

                        if(false)
                        this->special6= empty;
                                
this->special7= hashMap.get(PaymentGatewayData::SPECIAL7.toString());
    

                        if(false)
                        this->special7= empty;
                                
this->special8= hashMap.get(PaymentGatewayData::SPECIAL8.toString());
    

                        if(false)
                        this->special8= empty;
                                
this->special9= hashMap.get(PaymentGatewayData::SPECIAL9.toString());
    

                        if(false)
                        this->special9= empty;
                                
this->lastModified= hashMap.get(EntryData::getInstance().LASTMODIFIED.toString());
    

                        if(false)
                        this->lastModified= empty;
                                
this->timeEntered= hashMap.get(EntryData::getInstance().TIMECREATED.toString());
    

                        if(false)
                        this->timeEntered= empty;
                                
}


    public: std::string getStoreName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeName;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


    public: std::string getEnable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->enable;
    
}


    public: std::string getPaymentMethod(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->paymentMethod;
    
}


    public: std::string getMode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mode;
    
}


    public: std::string getTestProtocol(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testProtocol;
    
}


    public: std::string getTestServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testServer;
    
}


    public: std::string getTestPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testPort;
    
}


    public: std::string getTestPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->testPath;
    
}


    public: std::string getServerProtocol(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverProtocol;
    
}


    public: std::string getServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->server;
    
}


    public: std::string getServerPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverPort;
    
}


    public: std::string getServerPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->serverPath;
    
}


    public: std::string getUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->userName;
    
}


    public: std::string getPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->password;
    
}


    public: std::string getProxyProtocol(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyProtocol;
    
}


    public: std::string getProxyServer(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyServer;
    
}


    public: std::string getProxyPath(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyPath;
    
}


    public: std::string getProxyPort(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyPort;
    
}


    public: std::string getProxyUserName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyUserName;
    
}


    public: std::string getProxyPassword(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyPassword;
    
}


    public: std::string getTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeout;
    
}


    public: std::string getProxyTimeout(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->proxyTimeout;
    
}


    public: std::string getSpecial1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special1;
    
}


    public: std::string getSpecial2(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special2;
    
}


    public: std::string getSpecial3(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special3;
    
}


    public: std::string getSpecial4(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special4;
    
}


    public: std::string getSpecial5(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special5;
    
}


    public: std::string getSpecial6(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special6;
    
}


    public: std::string getSpecial7(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special7;
    
}


    public: std::string getSpecial8(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special8;
    
}


    public: std::string getSpecial9(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special9;
    
}


    public: std::string getLastModified(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->lastModified;
    
}


    public: std::string getTimeEntered(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->timeEntered;
    
}


    public: void setEnable(std::string value){
this->enable= value;
    
}


    public: void setStoreName(std::string value){
this->storeName= value;
    
}


    public: void setName(std::string value){
this->name= value;
    
}


    public: void setPaymentMethod(std::string value){
this->paymentMethod= value;
    
}


    public: void setMode(std::string value){
this->mode= value;
    
}


    public: void setTestProtocol(std::string value){
this->testProtocol= value;
    
}


    public: void setTestServer(std::string value){
this->testServer= value;
    
}


    public: void setTestPort(std::string value){
this->testPort= value;
    
}


    public: void setTestPath(std::string value){
this->testPath= value;
    
}


    public: void setServerProtocol(std::string value){
this->serverProtocol= value;
    
}


    public: void setServer(std::string value){
this->server= value;
    
}


    public: void setServerPort(std::string value){
this->serverPort= value;
    
}


    public: void setServerPath(std::string value){
this->serverPath= value;
    
}


    public: void setTimeout(std::string value){
this->timeout= value;
    
}


    public: void setUserName(std::string value){
this->userName= value;
    
}


    public: void setPassword(std::string value){
this->password= value;
    
}


    public: void setProxyProtocol(std::string value){
this->proxyProtocol= value;
    
}


    public: void setProxyServer(std::string value){
this->proxyServer= value;
    
}


    public: void setProxyPort(std::string value){
this->proxyPort= value;
    
}


    public: void setProxyPath(std::string value){
this->proxyPath= value;
    
}


    public: void setProxyUserName(std::string value){
this->proxyUserName= value;
    
}


    public: void setProxyPassword(std::string value){
this->proxyPassword= value;
    
}


    public: void setProxyTimeout(std::string value){
this->proxyTimeout= value;
    
}


    public: void setSpecial1(std::string value){
this->special1= value;
    
}


    public: void setSpecial2(std::string value){
this->special2= value;
    
}


    public: void setSpecial3(std::string value){
this->special3= value;
    
}


    public: void setSpecial4(std::string value){
this->special4= value;
    
}


    public: void setSpecial5(std::string value){
this->special5= value;
    
}


    public: void setSpecial6(std::string value){
this->special6= value;
    
}


    public: void setSpecial7(std::string value){
this->special7= value;
    
}


    public: void setSpecial8(std::string value){
this->special8= value;
    
}


    public: void setSpecial9(std::string value){
this->special9= value;
    
}


    public: void setLastModified(std::string value){
this->lastModified= value;
    
}


    public: void setTimeEntered(std::string value){
this->timeEntered= value;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toHashMap(true);;
    
}


                //@Throws(Exception.constructor)
            
    public: HashMap<Object*, Object*> toHashMap(bool isEncrypted){

    HashMap<Object*, Object*> paymentGatewayHashMap = StdUtil::getInstance().createHashMap();;
    
paymentGatewayHashMap.put(EntryData::getInstance().ENABLE, this->enable);
    
paymentGatewayHashMap.put(StoreFrontData::getInstance().NAME.toString(), this->storeName);
    
paymentGatewayHashMap.put(PaymentGatewayData::NAME.toString(), this->getName());
    
paymentGatewayHashMap.put(PaymentData::METHOD.toString(), this->paymentMethod);
    
paymentGatewayHashMap.put(PaymentGatewayData::MODE.toString(), this->mode);
    
paymentGatewayHashMap.put(PaymentGatewayData::TESTPROTOCOL.toString(), this->testProtocol);
    
paymentGatewayHashMap.put(PaymentGatewayData::TESTSERVER.toString(), this->testServer);
    
paymentGatewayHashMap.put(PaymentGatewayData::TESTPORT.toString(), this->testPort);
    
paymentGatewayHashMap.put(PaymentGatewayData::TESTPATH.toString(), this->testPath);
    
paymentGatewayHashMap.put(PaymentGatewayData::SERVERPROTOCOL.toString(), this->serverProtocol);
    
paymentGatewayHashMap.put(PaymentGatewayData::SERVER.toString(), this->server);
    
paymentGatewayHashMap.put(PaymentGatewayData::SERVERPORT.toString(), this->serverPort);
    
paymentGatewayHashMap.put(PaymentGatewayData::SERVERPATH.toString(), this->serverPath);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt superCrypt = SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap.put(UserData::USERNAME.toString(), superCrypt.encrypt(this->userName));
    
paymentGatewayHashMap.put(UserData::PASSWORD.toString(), superCrypt.encrypt(this->password));
    

                                    }
                                
                        else {
                            paymentGatewayHashMap.put(UserData::USERNAME.toString(), this->userName);
    
paymentGatewayHashMap.put(UserData::PASSWORD.toString(), this->password);
    

                        }
                            
paymentGatewayHashMap.put(PaymentGatewayData::TIMEOUT.toString(), this->timeout);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYPROTOCOL.toString(), this->proxyProtocol);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYSERVER.toString(), this->proxyServer);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYPORT.toString(), this->proxyPort);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYPATH.toString(), this->proxyPath);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYUSERNAME.toString(), this->proxyUserName);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYPASSWORD.toString(), this->proxyPassword);
    
paymentGatewayHashMap.put(PaymentGatewayData::PROXYTIMEOUT.toString(), this->proxyTimeout);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt superCrypt = SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL1.toString(), superCrypt.encrypt(this->special1));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL2.toString(), superCrypt.encrypt(this->special2));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL3.toString(), superCrypt.encrypt(this->special3));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL4.toString(), superCrypt.encrypt(this->special4));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL5.toString(), superCrypt.encrypt(this->special5));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL6.toString(), superCrypt.encrypt(this->special6));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL7.toString(), superCrypt.encrypt(this->special7));
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL8.toString(), superCrypt.encrypt(this->special8));
    

                                    }
                                
                        else {
                            paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL1.toString(), this->special1);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL2.toString(), this->special2);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL3.toString(), this->special3);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL4.toString(), this->special4);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL5.toString(), this->special5);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL6.toString(), this->special6);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL7.toString(), this->special7);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL8.toString(), this->special8);
    
paymentGatewayHashMap.put(PaymentGatewayData::SPECIAL9.toString(), this->special9);
    

                        }
                            
paymentGatewayHashMap.put(EntryData::getInstance().LASTMODIFIED.toString(), this->lastModified);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return paymentGatewayHashMap;
    
}


    public: BasicArrayList toVector(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->toVector(true);;
    
}


    public: BasicArrayList toVector(bool isEncrypted){

    BasicArrayList updateVector = BasicArrayListD();;
    
updateVector.add(this->enable);
    
updateVector.add(this->storeName);
    
updateVector.add(this->getName());
    
updateVector.add(this->paymentMethod);
    
updateVector.add(this->mode);
    
updateVector.add(this->testProtocol);
    
updateVector.add(this->testServer);
    
updateVector.add(this->testPort);
    
updateVector.add(this->testPath);
    
updateVector.add(this->serverProtocol);
    
updateVector.add(this->server);
    
updateVector.add(this->serverPort);
    
updateVector.add(this->serverPath);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt superCrypt = SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
updateVector.add(superCrypt.encrypt(this->userName));
    
updateVector.add(superCrypt.encrypt(this->password));
    

                                    }
                                
                        else {
                            updateVector.add(this->userName);
    
updateVector.add(this->password);
    

                        }
                            
updateVector.add(this->timeout);
    
updateVector.add(this->proxyProtocol);
    
updateVector.add(this->proxyServer);
    
updateVector.add(this->proxyPort);
    
updateVector.add(this->proxyPath);
    
updateVector.add(this->proxyUserName);
    
updateVector.add(this->proxyPassword);
    
updateVector.add(this->proxyTimeout);
    

                        if(isEncrypted)
                        
                                    {
                                    
    SuperCrypt superCrypt = SuperCrypt(PaymentGatewayData::CRYPTNUM);;
    
updateVector.add(superCrypt.encrypt(this->special1));
    
updateVector.add(superCrypt.encrypt(this->special2));
    
updateVector.add(superCrypt.encrypt(this->special3));
    
updateVector.add(superCrypt.encrypt(this->special4));
    
updateVector.add(superCrypt.encrypt(this->special5));
    
updateVector.add(superCrypt.encrypt(this->special6));
    
updateVector.add(superCrypt.encrypt(this->special7));
    
updateVector.add(superCrypt.encrypt(this->special8));
    
updateVector.add(superCrypt.encrypt(this->special9));
    

                                    }
                                
                        else {
                            updateVector.add(this->special1);
    
updateVector.add(this->special2);
    
updateVector.add(this->special3);
    
updateVector.add(this->special4);
    
updateVector.add(this->special5);
    
updateVector.add(this->special6);
    
updateVector.add(this->special7);
    
updateVector.add(this->special8);
    
updateVector.add(this->special9);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return updateVector;
    
}


                //@Throws(Exception.constructor)
            
    public: Object* getKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PaymentGatewayPrimaryKey(this->getStoreName(), this->getName());
    
}


};

            

