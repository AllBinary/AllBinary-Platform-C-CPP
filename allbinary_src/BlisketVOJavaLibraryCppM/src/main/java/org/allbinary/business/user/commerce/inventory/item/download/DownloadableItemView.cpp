
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
        



            #include <vector>
        
            #include "../../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../java/lang/Integer.h"
        
#include <java/util/Calendar.h>

      
#include <java/util/HashMap.h>

      
#include <java/util/Set.h>

      
#include <org/allbinary/data/tree/dom/DomNodeInterface.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "DownloadableItem.h"
#include "DownloadItemData.h"

class DownloadableItemView
            : public Object
        : public DomNodeInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: DownloadableItem downloadableItem;

public: DownloadableItemView(DownloadableItem downloadableItem){
this->downloadableItem= downloadableItem;
    
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance().PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this->logUtil.putF(this->commonStrings.START, this, "toXmlNode");
    

                                    }
                                

    HashMap<any, any> hashMap = this->downloadableItem.toHashMap();;
    

    int64_t totalTime = this->downloadableItem.getValidTime().longValue();;
    

    Calendar calendar = Calendar::getInstance();;
    

    int32_t year = calendar.get(Calendar::YEAR);;
    

    int32_t month = calendar.get(Calendar::MONTH);;
    

    int32_t day = calendar.get(Calendar::DAY_OF_MONTH);;
    

    int32_t hour = calendar.get(Calendar::HOUR);;
    

    int32_t minute = calendar.get(Calendar::MINUTE);;
    

    int32_t second = calendar.get(Calendar::SECOND);;
    
calendar.setTimeInMillis(calendar.getTimeInMillis() +totalTime);
    

    int32_t yearDelta = calendar.get(Calendar::YEAR);;
    

    int32_t monthDelta = calendar.get(Calendar::MONTH);;
    

    int32_t dayDelta = calendar.get(Calendar::DAY_OF_MONTH);;
    

    int32_t hourDelta = calendar.get(Calendar::HOUR);;
    

    int32_t minuteDelta = calendar.get(Calendar::MINUTE);;
    

    int32_t secondDelta = calendar.get(Calendar::SECOND);;
    
hashMap.put(DownloadItemData::VALID_TIME_YEARS, Integer::valueOf(yearDelta -year));
    
hashMap.put(DownloadItemData::VALID_TIME_MONTHS, Integer::valueOf(monthDelta -month));
    
hashMap.put(DownloadItemData::VALID_TIME_DAYS, Integer::valueOf(dayDelta -day));
    
hashMap.put(DownloadItemData::VALID_TIME_HOURS, Integer::valueOf(hourDelta -hour));
    
hashMap.put(DownloadItemData::VALID_TIME_MINUTES, Integer::valueOf(minuteDelta -minute));
    
hashMap.put(DownloadItemData::VALID_TIME_SECONDS, Integer::valueOf(secondDelta -second));
    

    Set keySet = hashMap.keys();;
    

    Node node = document.createElement(DownloadItemData::NAME);;
    

    StringUtil stringUtil = StringUtil::getInstance();;
    

    std::vector<Object*> nameArray = keySet.();;
    

    int32_t size = nameArray.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    std::string name = nameArray[index]! as string;;
    

    std::string value = hashMap.get(name) as string;;
    
value= stringUtil.getNonNull(value);
    
node.appendChild(ModDomHelper::createNameValueNodes(document, name, value));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


    public: Document toXmlDoc(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    public: std::string view(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


};

            

