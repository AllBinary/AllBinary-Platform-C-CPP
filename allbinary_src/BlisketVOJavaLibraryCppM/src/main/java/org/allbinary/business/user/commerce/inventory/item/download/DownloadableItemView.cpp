
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
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: downloadableItem: DownloadableItem;

public constructor (DownloadableItem downloadableItem){

            super();
        this.downloadableItem= downloadableItem;
    
}


                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document){

                        if(org.allbinary.logic.communication.log.config.type.LogConfigTypes.LOGGING.contains(org.allbinary.logic.communication.log.config.type.LogConfigTypeFactory.getInstance()!.PRODUCTSEARCHLOGGING))
                        
                                    {
                                    this.logUtil!.putF(this.commonStrings!.START, this, "toXmlNode");
    

                                    }
                                

    hashMap: HashMap<any, any> = this.downloadableItem!.toHashMap()!;;
    

    totalTime: int64_t = this.downloadableItem!.getValidTime()!.longValue()!;;
    

    calendar: Calendar = Calendar.getInstance()!;;
    

    year: int32_t = calendar.get(Calendar.YEAR)!;;
    

    month: int32_t = calendar.get(Calendar.MONTH)!;;
    

    day: int32_t = calendar.get(Calendar.DAY_OF_MONTH)!;;
    

    hour: int32_t = calendar.get(Calendar.HOUR)!;;
    

    minute: int32_t = calendar.get(Calendar.MINUTE)!;;
    

    second: int32_t = calendar.get(Calendar.SECOND)!;;
    
calendar.setTimeInMillis(calendar.getTimeInMillis() +totalTime);
    

    yearDelta: int32_t = calendar.get(Calendar.YEAR)!;;
    

    monthDelta: int32_t = calendar.get(Calendar.MONTH)!;;
    

    dayDelta: int32_t = calendar.get(Calendar.DAY_OF_MONTH)!;;
    

    hourDelta: int32_t = calendar.get(Calendar.HOUR)!;;
    

    minuteDelta: int32_t = calendar.get(Calendar.MINUTE)!;;
    

    secondDelta: int32_t = calendar.get(Calendar.SECOND)!;;
    
hashMap!.put(DownloadItemData.VALID_TIME_YEARS, Integer.valueOf(yearDelta -year));
    
hashMap!.put(DownloadItemData.VALID_TIME_MONTHS, Integer.valueOf(monthDelta -month));
    
hashMap!.put(DownloadItemData.VALID_TIME_DAYS, Integer.valueOf(dayDelta -day));
    
hashMap!.put(DownloadItemData.VALID_TIME_HOURS, Integer.valueOf(hourDelta -hour));
    
hashMap!.put(DownloadItemData.VALID_TIME_MINUTES, Integer.valueOf(minuteDelta -minute));
    
hashMap!.put(DownloadItemData.VALID_TIME_SECONDS, Integer.valueOf(secondDelta -second));
    

    keySet: Set = hashMap!.keys()!;;
    

    node: Node = document.createElement(DownloadItemData.NAME)!;;
    

    stringUtil: StringUtil = StringUtil.getInstance()!;;
    

    nameArray: std::vector<any> = keySet!.()!;;
    

    size: int32_t = nameArray!.length
                ;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    name: string = nameArray[index]! as string;;
    

    value: string = hashMap!.get(name) as string;;
    
value= stringUtil!.getNonNull(value);
    
node.appendChild(ModDomHelper.createNameValueNodes(document, name, value));
    
}




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


};

            

