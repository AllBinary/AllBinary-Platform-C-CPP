
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
        



            #include "../../../../../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeLicenseInterface.h"
#include "LicenseType.h"
#include "AbeClientInformationData.h"
#include "LicenseTypeFactory.h"

class AbeClientLicense
            : public Object
        : public AbeLicenseInterface {

    public: static bool hasRequiredKeys(Hashtable<any, any> resultHashtable){

    AbeClientInformationData abeClientInformationData = AbeClientInformationData::getInstance();;
    

                        if(resultHashtable.containsKey(abeClientInformationData.LICENSEID) && resultHashtable.containsKey(abeClientInformationData.LICENSESERVERS) && resultHashtable.containsKey(abeClientInformationData.KEY) && resultHashtable.containsKey(abeClientInformationData.LICENSE_TYPE))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    private: Hashtable<any, any> hashtable;

    private: std::string id;

    private: BasicArrayList servers;

    private: std::string special;

    private: LicenseType licenseType;

public: AbeClientLicense(Hashtable<any, any> hashtable){
this->hashtable= StdUtil::getInstance().createHashtable();
    

    AbeClientInformationData abeClientInformationData = AbeClientInformationData::getInstance();;
    

    Object* keyValue = hashtable.get(abeClientInformationData.KEY);;
    

                        if(keyValue != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(keyValue instanceof String)
                        
                                    {
                                    this->hashtable.put(abeClientInformationData.KEY, keyValue);
    

                                    }
                                

                                    }
                                
this->id= hashtable.get(abeClientInformationData.LICENSEID) as string;
    

    BasicArrayList vector = hashtable.get(abeClientInformationData.LICENSESERVERS) as BasicArrayList;;
    
this->servers= BasicArrayListD();
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
this->servers.add(vector.get(index));
    
}


    StringUtil stringUtil = StringUtil::getInstance();;
    
this->setSpecial(stringUtil.getNonNull(hashtable.get(abeClientInformationData.SPECIAL) as string));
    

    std::string licenseTypeString = stringUtil.getNonNull(hashtable.get(abeClientInformationData.LICENSE_TYPE) as string);;
    
this->licenseType= LicenseTypeFactory::getInstance().getInstance(licenseTypeString);
    
}


    public: bool hasKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->isValid();;
    
}


    public: std::string getKey(std::string keyName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable.get(keyName) as string;
    
}


    public: std::string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: BasicArrayList getServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->servers;
    
}


    public: bool isValid(){

    StringValidationUtil stringValidationUtil = StringValidationUtil::getInstance();;
    

                        if(!stringValidationUtil.isEmpty(this->getKey(AbeClientInformationData::getInstance().KEY)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: std::string toString(){

    StringMaker stringBuffer = StringMaker();;
    

    std::string BREAK = "<br/>";;
    
stringBuffer.append("License Id: ");
    
stringBuffer.append(this->getLicenseId());
    
stringBuffer.append(BREAK);
    
stringBuffer.append("Is Valid: ");
    
stringBuffer.appendboolean(this->isValid());
    
stringBuffer.append(BREAK);
    
stringBuffer.append("Keys: ");
    
stringBuffer.append(this->hashtable.toString());
    
stringBuffer.append(BREAK);
    

    BasicArrayList serverVector = this->getServers();;
    

    int32_t size = serverVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string nextServerString = serverVector.get(index) as string;;
    
stringBuffer.append("Server: ");
    
stringBuffer.append(nextServerString);
    
stringBuffer.append(BREAK);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer.toString();;
    
}


    private: void setSpecial(std::string special){
this->special= special;
    
}


    public: std::string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->special;
    
}


    public: LicenseType getLicenseType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseType;
    
}


};

            

