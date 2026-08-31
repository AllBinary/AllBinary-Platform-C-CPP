
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
        



        #ifndef ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H
        #define ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H

            #include "../../../../../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../../../../../java/lang/Long.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/data/tree/dom/DomNodeHelper.h>

      
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/allbinary/data/tree/dom/ModDomHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
#include <org/w3c/dom/NodeList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicProfileActionScriptOutput.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "ImageActionScriptOutputJPanel.h"
#include "ImageActionScriptOutputData.h"
#include "ImageActionScriptOutputProcessor.h"

class ImageActionScriptOutput: public BasicProfileActionScriptOutput: public ImageActionScriptOutputInterface {
        

    private: static const NAME: string = "Captures";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: saved: bool = false;

    private: display: bool = false;

    private: imageTypes: ImageTypes;

    private: actionScriptOutputJPanel: ImageActionScriptOutputJPanel;

public constructor (Node node);

public constructor ();

    public ImageActionScriptOutputJPanel getActionScriptOutputJPanel();

    public HashMap<any, any> toHashMap();

                //@Throws(Exception.constructor)
            
    public Node toXmlNode(Document document);

                //@Throws(Exception.constructor)
            
    public process(Long frame);

    public showDialog();

    public bool isSaved();

    public setSaved(bool saved);

    public bool isDisplay();

    public setDisplay(bool display);

    public string future_toString();

    public log();

    public ImageTypes getImageTypes();

    public setImageTypes(ImageTypes imageTypes);

};

            


        #endif //ORG_ALLBINARY_INPUT_AUTOMATION_MODULE_ACTIONS_SCRIPT_CONDITION_PROCESSORS_OUTPUT_IMAGEACTIONSCRIPTOUTPUT_H
