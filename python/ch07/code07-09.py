import operator

introDic, introList={}, []

introDic={'이름':'이수아','학교':'덕성여대','학번':20210802,'학과':'컴퓨터학과'}
introList=sorted(introDic.items(), key=operator.itemgetter(0))

print(introList)
