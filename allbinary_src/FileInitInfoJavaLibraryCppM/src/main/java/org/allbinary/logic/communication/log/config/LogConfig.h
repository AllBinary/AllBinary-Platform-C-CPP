
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
        



        #ifndef ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H
        #define ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <org/allbinary/business/entry/EntryData.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/document/DomDocumentHelper.h>

      
#include <org/allbinary/globals/PATH_GLOBALS.h>

      
#include <org/allbinary/globals/URLGLOBALS.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigType.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeData.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypesData.h>

      
#include <org/allbinary/logic/io/AbFileLocalInputStream.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/java/bool/BooleanUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LogConfigData.h"

class LogConfig
            : public Object
         {
        

    private: isEnabled: bool;

    private: name: string;

    private: description: string;

    private: path: string;

    private: fileName: string;

public constructor (string aName, string aDescription, string aPath, string aFileName);

public constructor (Node node);

    public string getName();

    public bool isEnabled();

    public enable();

    public disable();

    public string getDescription();

    public string getFileName();

    public setName(string value);

    public setDescription(string value);

    public setPath(string value);

    public setFileName(string value);

                //@Throws(Exception.constructor)
            
    Document getDoc();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getTypeVector();

};

            


        #endif //ORG_ALLBINARY_LOGIC_COMMUNICATION_LOG_CONFIG_LOGCONFIG_H
