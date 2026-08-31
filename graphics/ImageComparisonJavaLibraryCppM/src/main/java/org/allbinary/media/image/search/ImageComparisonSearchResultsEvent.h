
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
        



        #ifndef ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHRESULTSEVENT_H
        #define ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHRESULTSEVENT_H

#include <org/allbinary/logic/util/event/AllBinaryEventObject.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ImageComparisonSearch.h"

class ImageComparisonSearchResultsEvent: public AllBinaryEventObject {
        

    private: imageComparisonSearch: ImageComparisonSearch;

public constructor (any = {} anyType, ImageComparisonSearch imageComparisonSearch);

    public ImageComparisonSearch getImageComparisonSearch();

    setImageComparisonSearch(ImageComparisonSearch imageComparisonSearch);

};

            


        #endif //ORG_ALLBINARY_MEDIA_IMAGE_SEARCH_IMAGECOMPARISONSEARCHRESULTSEVENT_H
