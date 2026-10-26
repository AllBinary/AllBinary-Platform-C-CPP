
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/data/tree/dom/document/mapping/DomDocumentMappingInterface.h>

      
#include <org/allbinary/logic/visual/transform/info/TransformInfoInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TransformInfoObjectConfigInterface: public DomDocumentMappingInterface {

    bool containsView(TransformInfoInterface transformInfoInterface)

                //@Throws(Exception.constructor)
            
    std::string getName()

                //@Throws(Exception.constructor)
            
    BasicArrayList getTransformsGroup(std::string group)

                //@Throws(Exception.constructor)
            
    BasicArrayList getTransforms()

                //@Throws(Exception.constructor)
            
    BasicArrayList getParentTransforms()

                //@Throws(Exception.constructor)
            
    BasicArrayList getGroupTransforms()

                //@Throws(Exception.constructor)
            
    std::string getOutputTypeName()

    void setOutputTypeName(std::string value)

                //@Throws(Exception.constructor)
            
    std::string getInputOutputTypeName()

                //@Throws(Exception.constructor)
            
    std::string getInputOutputTypeFile()

                //@Throws(Exception.constructor)
            
    std::string getImportUriPath()

    std::string toString()

};

            

