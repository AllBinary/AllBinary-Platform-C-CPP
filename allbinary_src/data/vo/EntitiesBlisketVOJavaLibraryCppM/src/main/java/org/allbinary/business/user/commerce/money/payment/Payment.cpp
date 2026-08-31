
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../java/lang/Integer.h"
        
#include <java/util/HashMap.h>

      
#include <javax/servlet/ServletRequest.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/control/crypt/SuperCrypt.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PaymentInterface.h"
#include "PaymentData.h"
#include "CreditCardType.h"

class Payment
            : public Object
        : public PaymentInterface, public DomNodeInterface {
        

    private: name: string;

    private: expiration: string;

    private: encryption: string;

    private: number: string;

    private: id: string;

    private: type: string;

    private: tenderType: string;

    private: transactionType: string;

    private: aba: string;

    private: account: string;

    private: accountType: string;

    private: authorizationCode: string;

    private: checkNumber: string;

    private: checkType: string;

    private: driversLicense: string;

    private: magneticInkCheckReader: string;

    private: isDefault: bool = false;

public constructor (HashMap<any, any> payment){

            super();
        this.name= payment.get(PaymentData.NAME) as string;
    
this.type= payment.get(PaymentData.TYPE) as string;
    
this.expiration= payment.get(PaymentData.EXPIRATION) as string;
    
this.encryption= payment.get(EntryData.getInstance()!.ENCRYPTION) as string;
    
this.number= new SuperCrypt(new Integer(this.encryption).intValue()).decrypt(payment.get(PaymentData.NUMBER) as string) as string;
    
this.id= payment.get(PaymentData.ID) as string;
    

    def: string = payment.get(EntryData.getInstance()!.DEFAULT) as string;;
    

                        if(def != 
                                    null
                                 && def.compareTo(EntryData.getInstance()!.DEFAULT) == 0)
                        
                                    {
                                    this.isDefault= true;
    

                                    }
                                
                        else {
                            this.isDefault= false;
    

                        }
                            
this.tenderType= payment.get(PaymentData.TENDERTYPE) as string;
    
this.transactionType= payment.get(PaymentData.TRANSACTIONTYPE) as string;
    
this.aba= payment.get(PaymentData.ABA) as string;
    
this.account= payment.get(PaymentData.ACCOUNT) as string;
    
this.accountType= payment.get(PaymentData.ACCOUNTTYPE) as string;
    
this.authorizationCode= payment.get(PaymentData.AUTHORIZATIONCODE) as string;
    
this.checkNumber= payment.get(PaymentData.CHECKNUMBER) as string;
    
this.checkType= payment.get(PaymentData.CHECKTYPE) as string;
    
this.driversLicense= payment.get(PaymentData.DRIVERSLICENSE) as string;
    
this.magneticInkCheckReader= payment.get(PaymentData.MAGNETICINKCHECKREADER) as string;
    
}


public constructor (ServletRequest request){

            super();
        this.name= request.getParameter(PaymentData.NAME);
    
this.type= request.getParameter(PaymentData.TYPE);
    
this.expiration= request.getParameter(PaymentData.EXPIRATION);
    
this.number= request.getParameter(PaymentData.NUMBER);
    
this.tenderType= request.getParameter(PaymentData.TENDERTYPE);
    
this.transactionType= request.getParameter(PaymentData.TRANSACTIONTYPE);
    
this.aba= request.getParameter(PaymentData.ABA);
    
this.account= request.getParameter(PaymentData.ACCOUNT);
    
this.accountType= request.getParameter(PaymentData.ACCOUNTTYPE);
    
this.authorizationCode= request.getParameter(PaymentData.AUTHORIZATIONCODE);
    
this.checkNumber= request.getParameter(PaymentData.CHECKNUMBER);
    
this.checkType= request.getParameter(PaymentData.CHECKTYPE);
    
this.driversLicense= request.getParameter(PaymentData.DRIVERSLICENSE);
    
this.magneticInkCheckReader= request.getParameter(PaymentData.MAGNETICINKCHECKREADER);
    
}


public constructor (){

            super();
        }


    public Boolean isValid(){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    aFalse: Boolean = Boolean.FALSE;;
    

                        if(this.name == 
                                    null
                                 || this.name.compareTo(stringUtil!.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(this.type == 
                                    null
                                 || this.type.compareTo(stringUtil!.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(this.expiration == 
                                    null
                                 || this.expiration.compareTo(stringUtil!.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(this.number == 
                                    null
                                 || this.number.compareTo(stringUtil!.EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                

                        if(this.number.length > org.allbinary.business.user.commerce.money.payment.types.CreditCardType.MAXLEN)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return aFalse;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public setTenderType(string value){
this.tenderType= value;
    
}


    public setTransactionType(string value){
this.transactionType= value;
    
}


    public setAuthorizationCode(string value){
this.authorizationCode= value;
    
}


    public setCheckType(string value){
this.checkType= value;
    
}


    public setCheckNumber(string value){
this.checkNumber= value;
    
}


    public setDriversLicense(string value){
this.driversLicense= value;
    
}


    public setMagneticInkCheckReader(string value){
this.magneticInkCheckReader= value;
    
}


    public setAba(string value){
this.aba= value;
    
}


    public setAccountType(string value){
this.accountType= value;
    
}


    public setName(string value){
this.name= value;
    
}


    public setType(string value){
this.type= value;
    
}


    public setExpiration(string value){
this.expiration= value;
    
}


    public setNumber(string value){
this.number= value;
    
}


    public string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.type;
    
}


    public string getExpiration(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.expiration;
    
}


    public string getEncryption(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.encryption;
    
}


    public string getNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.number;
    
}


    public string getTenderType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.tenderType;
    
}


    public string getTransactionType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.transactionType;
    
}


    public string getAba(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.aba;
    
}


    public string getAccount(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.account;
    
}


    public string getAccountType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.accountType;
    
}


    public string getAuthorizationCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.authorizationCode;
    
}


    public string getCheckNumber(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.checkNumber;
    
}


    public string getCheckType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.checkType;
    
}


    public string getDriversLicense(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.driversLicense;
    
}


    public string getMagneticInkCheckReader(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.magneticInkCheckReader;
    
}


    public string getLastFour(){

                        if(this.number.length > PaymentData.MIN && this.number.length <= PaymentData.MAX)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.number.substring(this.number.length -4);;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return "Invalid #";
    

                        }
                            
}


    public bool isDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isDefault;
    
}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(PaymentData.NAME, this.name);
    
hashMap!.put(PaymentData.TYPE, this.type);
    
hashMap!.put(PaymentData.EXPIRATION, this.expiration);
    
hashMap!.put(PaymentData.NUMBER, this.getLastFour());
    
hashMap!.put(PaymentData.TENDERTYPE, this.tenderType);
    
hashMap!.put(PaymentData.TRANSACTIONTYPE, this.transactionType);
    
hashMap!.put(PaymentData.ABA, this.aba);
    
hashMap!.put(PaymentData.ACCOUNT, this.account);
    
hashMap!.put(PaymentData.ACCOUNTTYPE, this.accountType);
    
hashMap!.put(PaymentData.AUTHORIZATIONCODE, this.authorizationCode);
    
hashMap!.put(PaymentData.CHECKNUMBER, this.checkNumber);
    
hashMap!.put(PaymentData.DRIVERSLICENSE, this.driversLicense);
    
hashMap!.put(PaymentData.MAGNETICINKCHECKREADER, this.magneticInkCheckReader);
    

                        if(this.isDefault)
                        
                                    {
                                    hashMap!.put(EntryData.getInstance()!.DEFAULT, EntryData.getInstance()!.DEFAULT);
    

                                    }
                                
                        else {
                            hashMap!.put(EntryData.getInstance()!.DEFAULT, StringUtil.getInstance()!.EMPTY_STRING);
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    hashMap: HashMap<any, any> = this.toHashMap()!;;
    

    node: Node = ModDomHelper.createNameValueNodes(document, PaymentData.PAYMENT, hashMap)!;;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public Node toValidationInfoNode(Document document){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public string validationInfo(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

