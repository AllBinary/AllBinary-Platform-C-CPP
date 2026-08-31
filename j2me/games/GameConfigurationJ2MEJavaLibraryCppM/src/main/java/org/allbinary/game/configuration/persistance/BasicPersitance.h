
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/rms/RecordStore.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/PreLogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h>

      
#include <org/allbinary/persistance/PlatformRecordIdUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PersistanceStrings.h"
#include "NullRecordStore.h"

class BasicPersitance
            : public Object
         {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    const persistanceStrings: PersistanceStrings = PersistanceStrings.getInstance()!;

    private: const platformRecordIdUtil: PlatformRecordIdUtil = PlatformRecordIdUtil.getInstance()!;

    private: const recordId: string;

    const valueList: BasicArrayList = new BasicArrayListD();

    const idList: BasicArrayList = new BasicArrayListD();

protected constructor (string recordId);

                //@Throws(Exception.constructor)
            
    public deleteRecoreStore(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public deleteAll(AbeClientInformationInterface abeClientInformation);

                //@Throws(Exception.constructor)
            
    public delete(AbeClientInformationInterface abeClientInformation, int32_t deleteId);

    public string getRecordId(AbeClientInformationInterface abeClientInformation);

    public BasicArrayList getList();

    public BasicArrayList getIds();

    public clear();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_BASICPERSITANCE_H
