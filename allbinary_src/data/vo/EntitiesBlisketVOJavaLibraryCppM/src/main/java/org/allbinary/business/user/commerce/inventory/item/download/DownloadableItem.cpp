
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
        



        #ifndef ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_CPP
        #define ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/business/user/commerce/inventory/item/download/DownloadableItem.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Long.h"
        
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
        #include "org/allbinary/business/user/commerce/inventory/item/download/DownloadItemData.h"


DownloadableItem::DownloadableItem(std::string id){

    std::string EMPTY_STRING = StringUtil::getInstance()->EMPTY_STRING;;
    
this->id= (new ProductIdGenerator())->getNext();
    
this->basicItemId= id;
    
this->enabled= EntryData::getInstance()->YES;
    
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


DownloadableItem::DownloadableItem(HashMap<Object*, Object*>* hashMap){
this->id= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::ID));
    
this->basicItemId= JavaBoxes::unbox<std::string>(hashMap->get(BasicItemData::getInstance()->ID));
    
this->enabled= JavaBoxes::unbox<std::string>(hashMap->get(EntryData::getInstance()->ENABLE));
    
this->system= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::SYSTEM));
    
this->platform= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::PLATFORM));
    
this->specialName= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::SPECIAL_NAME));
    
this->version= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VERSION));
    
this->changes= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::CHANGES));
    
this->licenseFile= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::LICENSE_FILE));
    
this->file= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::FILE));
    

    std::string value = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::SIZE));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(value))
                        
                                    {
                                    this->size= (value).toLong();
    

                                    }
                                
                        else {
                            this->size= int64_t(0);
    

                        }
                            

    std::string validTime = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME));;
    

                        if(!StringValidationUtil::getInstance()->isEmpty(validTime))
                        
                                    {
                                    this->validTime= (validTime).toLong();
    

                                    }
                                
                        else {
                            
    std::string totalYears = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_YEARS));;
    

    std::string totalMonths = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_MONTHS));;
    

    std::string totalDays = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_DAYS));;
    

    std::string totalHours = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_HOURS));;
    

    std::string totalMinutes = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_MINUTES));;
    

    std::string totalSeconds = JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::VALID_TIME_SECONDS));;
    

    int64_t totalTime = TimeUtil::getInstance()->getTotalTime(totalYears, totalMonths, totalDays, totalHours, totalMinutes, totalSeconds);;
    
this->validTime= int64_t(totalTime);
    

                        }
                            
this->retries= JavaBoxes::unbox<std::string>(hashMap->get(DownloadItemData::RETRIES));
    
}


    auto DownloadableItem::toVector() -> BasicArrayList*{

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    

    BasicArrayList* values = new BasicArrayListD();;
    
values->add(getId());
    
values->add(this->basicItemId);
    
values->add(this->enabled);
    
values->add(this->getSpecialName());
    
values->add(this->getVersion());
    
values->add(this->getChanges());
    
values->add(this->getSystem());
    
values->add(this->getPlatform());
    
values->add(this->getLicenseFile());
    
values->add(this->getFile());
    
values->add(this->getSize().toString());
    
values->add(this->getValidTime().toString());
    
values->add(this->getRetries());
    
values->add(time);
    
values->add(time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


    auto DownloadableItem::toHashMap() -> HashMap<Object*, Object*>*{

    HashMap<Object*, Object*>* values = StdUtil::getInstance()->createHashMap();;
    
values->put(DownloadItemData::ID, this->getId());
    
values->put(BasicItemData::getInstance()->ID, this->basicItemId);
    
values->put(EntryData::getInstance()->ENABLE, this->enabled);
    
values->put(DownloadItemData::SYSTEM, this->getSystem());
    
values->put(DownloadItemData::PLATFORM, this->getPlatform());
    
values->put(DownloadItemData::SPECIAL_NAME, this->getSpecialName());
    
values->put(DownloadItemData::VERSION, this->getVersion());
    
values->put(DownloadItemData::CHANGES, this->getChanges());
    
values->put(DownloadItemData::LICENSE_FILE, this->getLicenseFile());
    
values->put(DownloadItemData::FILE, this->getFile());
    
values->put(DownloadItemData::SIZE, this->getSize().toString());
    
values->put(DownloadItemData::VALID_TIME, this->getValidTime().toString());
    
values->put(DownloadItemData::RETRIES, this->getRetries());
    

    Calendar* calendar = Calendar::getInstance();;
    

    std::string time = (int64_t(calendar->getTimeInMillis())).toString();;
    
values->put(EntryData::getInstance()->LASTMODIFIED, time);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return values;
    
}


    auto DownloadableItem::getId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->id;
    
}


    auto DownloadableItem::getSystem() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->system;
    
}


    auto DownloadableItem::getPlatform() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->platform;
    
}


    auto DownloadableItem::getSpecialName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->specialName;
    
}


    auto DownloadableItem::getVersion() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->version;
    
}


    auto DownloadableItem::getChanges() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->changes;
    
}


    auto DownloadableItem::getLicenseFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->licenseFile;
    
}


    auto DownloadableItem::getFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->file;
    
}


    auto DownloadableItem::getSize() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->size;
    
}


    auto DownloadableItem::getValidTime() -> int64_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->validTime;
    
}


    auto DownloadableItem::getRetries() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->retries;
    
}




        #endif //ORG_ALLBINARY_BUSINESS_USER_COMMERCE_INVENTORY_ITEM_DOWNLOAD_DOWNLOADABLEITEM_CPP
