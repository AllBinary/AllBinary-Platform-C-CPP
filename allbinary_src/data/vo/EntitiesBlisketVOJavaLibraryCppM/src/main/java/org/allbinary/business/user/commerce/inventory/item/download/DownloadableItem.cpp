
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
        



            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Long.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/business/user/commerce/inventory/item/BasicItemData.h>

      
#include <org/allbinary/data/generator/ProductIdGenerator.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/time/TimeUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadItemData.h"

class DownloadableItem
            : public Object
         {

    private: std::string id;

    private: std::string basicItemId;

    private: std::string enabled;

    private: std::string system;

    private: std::string platform;

    private: std::string specialName;

    private: std::string version;

    private: std::string changes;

    private: std::string licenseFile;

    private: std::string file;

    private: Long size;

    private: Long validTime;

    private: std::string retries;

public: DownloadableItem(std::string id){

    std::string EMPTY_STRING = StringUtil::getInstance().EMPTY_STRING;;
    
this->id= ProductIdGenerator().getNext();
    
this->basicItemId= id;
    
this->enabled= EntryData::getInstance().YES;
    
this->system= "Java";
    
this->platform= "Android";
    
this->specialName= EMPTY_STRING;
    
this->version= EMPTY_STRING;
    
this->changes= EMPTY_STRING;
    
this->licenseFile= EMPTY_STRING;
    
this->file= EMPTY_STRING;
    
this->size= (0).toLong();
    
this->validTime= (0).toLong();
    
this->retries= EMPTY_STRING;
    
}


public: DownloadableItem(HashMap<any, any> hashMap){
this->id= hashMap.get(DownloadItemData::ID) as string;
    
this->basicItemId= hashMap.get(BasicItemData::getInstance().ID) as string;
    
this->enabled= hashMap.get(EntryData::getInstance().ENABLE) as string;
    
this->system= hashMap.get(DownloadItemData::SYSTEM) as string;
    
this->platform= hashMap.get(DownloadItemData::PLATFORM) as string;
    
this->specialName= hashMap.get(DownloadItemData::SPECIAL_NAME) as string;
    
this->version= hashMap.get(DownloadItemData::VERSION) as string;
    
this->changes= hashMap.get(DownloadItemData::CHANGES) as string;
    
this->licenseFile= hashMap.get(DownloadItemData::LICENSE_FILE) as string;
    
this->file= hashMap.get(DownloadItemData::FILE) as string;
    

    std::string value = hashMap.get(DownloadItemData::SIZE) as string;;
    

                        if(!StringValidationUtil::getInstance().isEmpty(value))
                        
                                    {
                                    this->size= (value).toLong();
    

                                    }
                                
                        else {
                            this->size= Long(0);
    

                        }
                            

    std::string validTime = hashMap.get(DownloadItemData::VALID_TIME) as string;;
    

                        if(!StringValidationUtil::getInstance().isEmpty(validTime))
                        
                                    {
                                    this->validTime= (validTime).toLong();
    

                                    }
                                
                        else {
                            
    std::string totalYears = hashMap.get(DownloadItemData::VALID_TIME_YEARS) as string;;
    

    std::string totalMonths = hashMap.get(DownloadItemData::VALID_TIME_MONTHS) as string;;
    

    std::string totalDays = hashMap.get(DownloadItemData::VALID_TIME_DAYS) as string;;
    

    std::string totalHours = hashMap.get(DownloadItemData::VALID_TIME_HOURS) as string;;
    

    std::string totalMinutes = hashMap.get(DownloadItemData::VALID_TIME_MINUTES) as string;;
    

    std::string totalSeconds = hashMap.get(DownloadItemData::VALID_TIME_SECONDS) as string;;
    

    int64_t totalTime = TimeUtil::getInstance().getTotalTime(totalYears, totalMonths, totalDays, totalHours, totalMinutes, totalSeconds);;
    
this->validTime= Long(totalTime);
    

                        }
                            
this->retries= hashMap.get(DownloadItemData::RETRIES) as string;
    
}


    public: BasicArrayList toVector(){

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    

    BasicArrayList values = BasicArrayListD();;
    
values.add(getId());
    
values.add(this->basicItemId);
    
values.add(this->enabled);
    
values.add(this->getSpecialName());
    
values.add(this->getVersion());
    
values.add(this->getChanges());
    
values.add(this->getSystem());
    
values.add(this->getPlatform());
    
values.add(this->getLicenseFile());
    
values.add(this->getFile());
    
values.add(this->getSize().toString());
    
values.add(this->getValidTime().toString());
    
values.add(this->getRetries());
    
values.add(time);
    
values.add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: HashMap<any, any> toHashMap(){

    HashMap<any, any> values = StdUtil::getInstance().createHashMap();;
    
values.put(DownloadItemData::ID, this->getId());
    
values.put(BasicItemData::getInstance().ID, this->basicItemId);
    
values.put(EntryData::getInstance().ENABLE, this->enabled);
    
values.put(DownloadItemData::SYSTEM, this->getSystem());
    
values.put(DownloadItemData::PLATFORM, this->getPlatform());
    
values.put(DownloadItemData::SPECIAL_NAME, this->getSpecialName());
    
values.put(DownloadItemData::VERSION, this->getVersion());
    
values.put(DownloadItemData::CHANGES, this->getChanges());
    
values.put(DownloadItemData::LICENSE_FILE, this->getLicenseFile());
    
values.put(DownloadItemData::FILE, this->getFile());
    
values.put(DownloadItemData::SIZE, this->getSize().toString());
    
values.put(DownloadItemData::VALID_TIME, this->getValidTime().toString());
    
values.put(DownloadItemData::RETRIES, this->getRetries());
    

    Calendar calendar = Calendar::getInstance();;
    

    std::string time = Long(calendar.getTimeInMillis()).toString();;
    
values.put(EntryData::getInstance().LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return values;
    
}


    public: std::string getId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->id;
    
}


    public: std::string getSystem(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->system;
    
}


    public: std::string getPlatform(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->platform;
    
}


    public: std::string getSpecialName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->specialName;
    
}


    public: std::string getVersion(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->version;
    
}


    public: std::string getChanges(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->changes;
    
}


    public: std::string getLicenseFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->licenseFile;
    
}


    public: std::string getFile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->file;
    
}


    public: Long getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->size;
    
}


    public: Long getValidTime(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->validTime;
    
}


    public: std::string getRetries(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->retries;
    
}


};

            

