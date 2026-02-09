#ifndef REGULAR_MEMBER_H
#define REGULAR_MEMBER_H

#include "Member.h"

class RegularMember : public Member {
public:
    RegularMember(const std::string& name, const std::string& memberId)
        : Member(name, memberId, 3) {}
};

#endif
