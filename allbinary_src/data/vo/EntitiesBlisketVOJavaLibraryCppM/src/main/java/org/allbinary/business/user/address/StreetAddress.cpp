
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
        



            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <javax/servlet/http/HttpServletRequest.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "StreetAddressData.h"

class StreetAddress
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: id: string;

    private: name: string;

    private: street: string;

    private: city: string;

    private: state: string;

    private: code: string;

    private: country: string;

    private: isDefault: bool = false;

public constructor (){

            super();
        }


public constructor (Node node){

            super();
        
    nameNode: Node = DomSearchHelper.getNode(StreetAddressData.NAME, node.getChildNodes())!;;
    
this.name= DomNodeHelper.getTextNodeValue(nameNode);
    

    streetNode: Node = DomSearchHelper.getNode(StreetAddressData.STREET, node.getChildNodes())!;;
    
this.street= DomNodeHelper.getTextNodeValue(streetNode);
    

    cityNode: Node = DomSearchHelper.getNode(StreetAddressData.CITY, node.getChildNodes())!;;
    
this.city= DomNodeHelper.getTextNodeValue(cityNode);
    

    stateNode: Node = DomSearchHelper.getNode(StreetAddressData.STATE, node.getChildNodes())!;;
    
this.state= DomNodeHelper.getTextNodeValue(stateNode);
    

    codeNode: Node = DomSearchHelper.getNode(StreetAddressData.CODE, node.getChildNodes())!;;
    
this.code= DomNodeHelper.getTextNodeValue(codeNode);
    

    countryNode: Node = DomSearchHelper.getNode(StreetAddressData.COUNTRY, node.getChildNodes())!;;
    
this.country= DomNodeHelper.getTextNodeValue(countryNode);
    
this.log();
    
}


public constructor (StreetAddress streetAddress){

            super();
        this.id= streetAddress!.getId();
    
this.name= streetAddress!.getName();
    
this.street= streetAddress!.getStreet();
    
this.city= streetAddress!.getCity();
    
this.state= streetAddress!.getState();
    
this.code= streetAddress!.getCode();
    
this.country= streetAddress!.getCountry();
    
this.isDefault= streetAddress!.isDefault();
    
this.log();
    
}


public constructor (HttpServletRequest request){

            super();
        this.setId(request.getParameter(StreetAddressData.ID));
    
this.setName(request.getParameter(StreetAddressData.NAME));
    
this.setStreet(request.getParameter(StreetAddressData.STREET));
    
this.setCity(request.getParameter(StreetAddressData.CITY));
    
this.setState(request.getParameter(StreetAddressData.STATE));
    
this.setCode(request.getParameter(StreetAddressData.CODE));
    
this.setCountry(request.getParameter(StreetAddressData.COUNTRY));
    
this.log();
    
}


public constructor (string name, string street, string city, string state, string code, string country){

            super();
        this.name= name;
    
this.street= street;
    
this.city= city;
    
this.state= state;
    
this.code= code;
    
this.country= country;
    
this.log();
    
}


public constructor (HashMap<any, any> address){

            super();
        this.id= address.get(StreetAddressData.ID) as string;
    
this.name= address.get(StreetAddressData.NAME) as string;
    
this.street= address.get(StreetAddressData.STREET) as string;
    
this.city= address.get(StreetAddressData.CITY) as string;
    
this.state= address.get(StreetAddressData.STATE) as string;
    
this.code= address.get(StreetAddressData.CODE) as string;
    
this.country= address.get(StreetAddressData.COUNTRY) as string;
    

    def: string = address.get(StreetAddressData.DEFAULT) as string;;
    

                        if(def != 
                                    null
                                 && def.compareTo(StreetAddressData.DEFAULT) == 0)
                        
                                    {
                                    this.isDefault= true;
    

                                    }
                                
                        else {
                            this.isDefault= false;
    

                        }
                            
this.log();
    
}


    log(){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGING))
                        
                                    {
                                    this.logUtil!.putF("Created Address: \n" +this.toHashMap(), this, "log");
    

                                    }
                                
}


    public setId(string id){
this.id= id;
    
}


    public setName(string name){
this.name= name;
    
}


    public setStreet(string value){
this.street= value;
    
}


    public setCity(string value){
this.city= value;
    
}


    public setState(string value){
this.state= value;
    
}


    public setCode(string value){
this.code= value;
    
}


    public setCountry(string value){
this.country= value;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


    public string getStreet(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.street;
    
}


    public string getCity(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.city;
    
}


    public string getState(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.state;
    
}


    public string getCode(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.code;
    
}


    public string getCountry(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.country;
    
}


    public string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public bool isDefault(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isDefault;
    
}


    public Boolean isEmpty(){

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.getName() == 
                                    null
                                 && this.getName()!.compareTo(EMPTY_STRING) == 0 && this.getStreet() == 
                                    null
                                 && this.getStreet()!.compareTo(EMPTY_STRING) == 0 && this.getCity() == 
                                    null
                                 && this.getCity()!.compareTo(EMPTY_STRING) == 0 && this.getState() == 
                                    null
                                 && this.getState()!.compareTo(EMPTY_STRING) == 0 && this.getCode() == 
                                    null
                                 && this.getCode()!.compareTo(EMPTY_STRING) == 0 && this.getCountry() == 
                                    null
                                 && this.getCountry()!.compareTo(EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    
}


    public Boolean isValid(){

    EMPTY_STRING: string = StringUtil.getInstance()!.EMPTY_STRING;;
    

                        if(this.getName() == 
                                    null
                                 || this.getName()!.compareTo(EMPTY_STRING) == 0 || this.getStreet() == 
                                    null
                                 || this.getStreet()!.compareTo(EMPTY_STRING) == 0 || this.getCity() == 
                                    null
                                 || this.getCity()!.compareTo(EMPTY_STRING) == 0 || this.getState() == 
                                    null
                                 || this.getState()!.compareTo(EMPTY_STRING) == 0 || this.getCode() == 
                                    null
                                 || this.getCode()!.compareTo(EMPTY_STRING) == 0 || this.getCountry() == 
                                    null
                                 || this.getCountry()!.compareTo(EMPTY_STRING) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.FALSE;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Boolean.TRUE;
    
}


    public string validationInfo(){

    stringBuffer: StringMaker = new StringMaker();;
    
stringBuffer!.append("Address Failed To Validate - All fields must contain data.<br></br>");
    

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isValidRequired(this.getName(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid name");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.getStreet(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid street");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.getCity(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid city");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.getState(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid state");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.getCode(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid zipcode");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                

                        if(!stringValidationUtil!.isValidRequired(this.getCountry(), StreetAddressData.MIN, StreetAddressData.MAX))
                        
                                    {
                                    stringBuffer!.append("Please enter a valid country");
    
stringBuffer!.append("<br></br>");
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    Document toValidationInfoDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    Node toValidationInfoNode(Document document){

        try {
            
    node: Node = document.createElement(StreetAddressData.FORM)!;;
    
node.appendChild(this.toXmlNode(document));
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    

                //: 
} catch(e) 
            {

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.SQLLOGGINGERROR))
                        
                                    {
                                    
    commonStrings: CommonStrings = CommonStrings.getInstance()!;;
    
this.logUtil!.put(commonStrings!.EXCEPTION, this, "toValidationInfoNode", e);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}

}


    public HashMap<any, any> toHashMap(){

    hashMap: HashMap<any, any> = new HashMap<any, any>();;
    
hashMap!.put(StreetAddressData.ID, this.id);
    
hashMap!.put(StreetAddressData.NAME, this.name);
    
hashMap!.put(StreetAddressData.STREET, this.street);
    
hashMap!.put(StreetAddressData.CITY, this.city);
    
hashMap!.put(StreetAddressData.STATE, this.state);
    
hashMap!.put(StreetAddressData.CODE, this.code);
    
hashMap!.put(StreetAddressData.COUNTRY, this.country);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hashMap;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    hashMap: HashMap<any, any> = this.toHashMap()!;;
    

    keySet: Set = hashMap!.keys()!;;
    

    keyArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = keyArray!.length
                ;;
    

    node: Node = document.createElement(StreetAddressData.ADDRESS)!;;
    




                        for (
    i: int32_t = 0;i < size; i++)
        {

    name: string = keyArray[i]! as string;;
    

    value: string = stringUtil!.getNonNull(hashMap!.get(name) as string)!;;
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

