cmake_minimum_required(VERSION 3.6)
project(SeedCup2016Final)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp KeywordToken.cpp KeywordToken.h LevenshteinDistance.cpp LevenshteinDistance.h
        cppjieba/Jieba.hpp cppjieba/DictTrie.hpp cppjieba/FullSegment.hpp cppjieba/HMMModel.hpp cppjieba cppjieba/HMMSegment.hpp
        cppjieba/KeywordExtractor.hpp cppjieba/MixSegment.hpp cppjieba/MPSegment.hpp cppjieba/PosTagger.hpp
        cppjieba/PreFilter.hpp cppjieba/QuerySegment.hpp cppjieba/SegmentBase.hpp cppjieba/SegmentTagged.hpp
        cppjieba/SegmentTagged.hpp cppjieba/TextRankExtractor.hpp cppjieba/Trie.hpp cppjieba/Unicode.hpp
        FileHelper.cpp FileHelper.hpp VectorDistance.cpp VectorDistance.hpp TokenHelper.cpp TokenHelper.h)
add_executable(SeedCup2016Final ${SOURCE_FILES})

INCLUDE_DIRECTORIES(limonp)
#dict/hmm_model.utf8 dict/idf.utf8  dict/stop_words.utf8 dict/user.dict.utf8
#dict/pos_dict/char_state_tab.utf8 dict/pos_dict/prob_emit.utf8 dict/pos_dict/prob_start.utf8 dict/pos_dict/prob_trans.utf8
#dict/jieba.dict.utf8