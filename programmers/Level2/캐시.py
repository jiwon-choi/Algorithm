'''
 # https://programmers.co.kr/learn/courses/30/lessons/17680
'''


def solution(cacheSize, cities):
    if cacheSize == 0:
        return len(cities) * 5

    cache, time = [], 0
    for city in cities:
        city = city.lower()
        if city not in cache:
            if len(cache) == cacheSize:
                cache.pop(0)
            time += 5
        else:
            cache.remove(city)
            time += 1
        cache.append(city)

    return time
