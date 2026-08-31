
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

      
#include <java/util/Vector.h>

      
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
        

    public static bool hasRequiredKeys(Hashtable<any, any> resultHashtable){

    abeClientInformationData: AbeClientInformationData = AbeClientInformationData.getInstance()!;;
    

                        if(resultHashtable!.containsKey(abeClientInformationData!.LICENSEID) && resultHashtable!.containsKey(abeClientInformationData!.LICENSESERVERS) && resultHashtable!.containsKey(abeClientInformationData!.KEY) && resultHashtable!.containsKey(abeClientInformationData!.LICENSE_TYPE))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    private: hashtable: Hashtable<any, any>;

    private: id: string;

    private: servers: BasicArrayList;

    private: special: string;

    private: licenseType: LicenseType;

public constructor (Hashtable<any, any> hashtable){

            super();
        this.hashtable= new Hashtable<any, any>();
    

    abeClientInformationData: AbeClientInformationData = AbeClientInformationData.getInstance()!;;
    

    keyValue: any = hashtable.get(abeClientInformationData!.KEY)!;;
    

                        if(keyValue != 
                                    null
                                )
                        
                                    {
                                    
                        if(keyValue instanceof String)
                        
                                    {
                                    this.hashtable.put(abeClientInformationData!.KEY, keyValue);
    

                                    }
                                

                                    }
                                
this.id= hashtable.get(abeClientInformationData!.LICENSEID) as string;
    

    vector: Vector = hashtable.get(abeClientInformationData!.LICENSESERVERS) as Vector;;
    
this.servers= new BasicArrayListD();
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {
this.servers.add(vector.get(index));
    
}


    stringUtil: StringUtil = StringUtil.getInstance()!;;
    
this.setSpecial(stringUtil!.getNonNull(hashtable.get(abeClientInformationData!.SPECIAL) as string));
    

    licenseTypeString: string = stringUtil!.getNonNull(hashtable.get(abeClientInformationData!.LICENSE_TYPE) as string)!;;
    
this.licenseType= LicenseTypeFactory.getInstance()!.getInstance(licenseTypeString);
    
}


    public bool hasKey(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.isValid();;
    
}


    public string getKey(string keyName){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable.get(keyName) as string;
    
}


    public string getLicenseId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.id;
    
}


    public BasicArrayList getServers(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.servers;
    
}


    public bool isValid(){

    stringValidationUtil: StringValidationUtil = StringValidationUtil.getInstance()!;;
    

                        if(!stringValidationUtil!.isEmpty(this.getKey(AbeClientInformationData.getInstance()!.KEY)))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public string toString(){

    stringBuffer: StringMaker = new StringMaker();;
    

    BREAK: string = "<br/>";;
    
stringBuffer!.append("License Id: ");
    
stringBuffer!.append(this.getLicenseId());
    
stringBuffer!.append(BREAK);
    
stringBuffer!.append("Is Valid: ");
    
stringBuffer!.appendboolean(this.isValid());
    
stringBuffer!.append(BREAK);
    
stringBuffer!.append("Keys: ");
    
stringBuffer!.append(this.hashtable.toString());
    
stringBuffer!.append(BREAK);
    

    serverVector: BasicArrayList = this.getServers()!;;
    

    size: int32_t = serverVector!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    nextServerString: string = serverVector!.get(index) as string;;
    
stringBuffer!.append("Server: ");
    
stringBuffer!.append(nextServerString);
    
stringBuffer!.append(BREAK);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuffer!.toString();;
    
}


    setSpecial(string special){
this.special= special;
    
}


    public string getSpecial(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.special;
    
}


    public LicenseType getLicenseType(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.licenseType;
    
}


};

            

