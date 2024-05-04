2024-05-03T06:24:59.2414418Z Current runner version: '2.316.0'
2024-05-03T06:24:59.2437254Z ##[group]Operating System
2024-05-03T06:24:59.2437820Z Ubuntu
2024-05-03T06:24:59.2438223Z 22.04.4
2024-05-03T06:24:59.2438494Z LTS
2024-05-03T06:24:59.2438822Z ##[endgroup]
2024-05-03T06:24:59.2439268Z ##[group]Runner Image
2024-05-03T06:24:59.2439663Z Image: ubuntu-22.04
2024-05-03T06:24:59.2440005Z Version: 20240422.1.0
2024-05-03T06:24:59.2440996Z Included Software: https://github.com/actions/runner-images/blob/ubuntu22/20240422.1/images/ubuntu/Ubuntu2204-Readme.md
2024-05-03T06:24:59.2442303Z Image Release: https://github.com/actions/runner-images/releases/tag/ubuntu22%2F20240422.1
2024-05-03T06:24:59.2443081Z ##[endgroup]
2024-05-03T06:24:59.2443526Z ##[group]Runner Image Provisioner
2024-05-03T06:24:59.2443984Z 2.0.369.1
2024-05-03T06:24:59.2444261Z ##[endgroup]
2024-05-03T06:24:59.2446395Z ##[group]GITHUB_TOKEN Permissions
2024-05-03T06:24:59.2447887Z Actions: write
2024-05-03T06:24:59.2448530Z Attestations: write
2024-05-03T06:24:59.2448990Z Checks: write
2024-05-03T06:24:59.2449392Z Contents: write
2024-05-03T06:24:59.2449759Z Deployments: write
2024-05-03T06:24:59.2450127Z Discussions: write
2024-05-03T06:24:59.2450550Z Issues: write
2024-05-03T06:24:59.2450898Z Metadata: read
2024-05-03T06:24:59.2451215Z Packages: write
2024-05-03T06:24:59.2451622Z Pages: write
2024-05-03T06:24:59.2451978Z PullRequests: write
2024-05-03T06:24:59.2452335Z RepositoryProjects: write
2024-05-03T06:24:59.2452820Z SecurityEvents: write
2024-05-03T06:24:59.2453196Z Statuses: write
2024-05-03T06:24:59.2453508Z ##[endgroup]
2024-05-03T06:24:59.2456229Z Secret source: Actions
2024-05-03T06:24:59.2456755Z Prepare workflow directory
2024-05-03T06:24:59.3129873Z Prepare all required actions
2024-05-03T06:24:59.3274986Z Getting action download info
2024-05-03T06:24:59.4493744Z Download action repository 'actions/checkout@v4' (SHA:0ad4b8fadaa221de15dcec353f45205ec38ea70b)
2024-05-03T06:24:59.7071114Z Download action repository 'actions/setup-node@v4' (SHA:60edb5dd545a775178f52524783378180af0d1f8)
2024-05-03T06:24:59.9616115Z Complete job name: build (18.x)
2024-05-03T06:25:00.0387064Z ##[group]Run actions/checkout@v4
2024-05-03T06:25:00.0387709Z with:
2024-05-03T06:25:00.0388090Z   repository: yume-chan/ya-webadb
2024-05-03T06:25:00.0388703Z   token: ***
2024-05-03T06:25:00.0389168Z   ssh-strict: true
2024-05-03T06:25:00.0389538Z   ssh-user: git
2024-05-03T06:25:00.0389879Z   persist-credentials: true
2024-05-03T06:25:00.0390374Z   clean: true
2024-05-03T06:25:00.0390741Z   sparse-checkout-cone-mode: true
2024-05-03T06:25:00.0391173Z   fetch-depth: 1
2024-05-03T06:25:00.0391606Z   fetch-tags: false
2024-05-03T06:25:00.0391980Z   show-progress: true
2024-05-03T06:25:00.0392319Z   lfs: false
2024-05-03T06:25:00.0392744Z   submodules: false
2024-05-03T06:25:00.0393119Z   set-safe-directory: true
2024-05-03T06:25:00.0393482Z env:
2024-05-03T06:25:00.0393886Z   BASE_PATH: /ya-webadb
2024-05-03T06:25:00.0394267Z ##[endgroup]
2024-05-03T06:25:00.1937377Z Syncing repository: yume-chan/ya-webadb
2024-05-03T06:25:00.1939910Z ##[group]Getting Git version info
2024-05-03T06:25:00.1941305Z Working directory is '/home/runner/work/ya-webadb/ya-webadb'
2024-05-03T06:25:00.1942747Z [command]/usr/bin/git version
2024-05-03T06:25:00.1943411Z git version 2.43.2
2024-05-03T06:25:00.1947683Z ##[endgroup]
2024-05-03T06:25:00.1986022Z Temporarily overriding HOME='/home/runner/work/_temp/3ff19f16-e2a3-43e5-a62e-e214112e4ab4' before making global git config changes
2024-05-03T06:25:00.1988228Z Adding repository directory to the temporary git global config as a safe directory
2024-05-03T06:25:00.1990287Z [command]/usr/bin/git config --global --add safe.directory /home/runner/work/ya-webadb/ya-webadb
2024-05-03T06:25:00.2054104Z Deleting the contents of '/home/runner/work/ya-webadb/ya-webadb'
2024-05-03T06:25:00.2055753Z ##[group]Initializing the repository
2024-05-03T06:25:00.2056936Z [command]/usr/bin/git init /home/runner/work/ya-webadb/ya-webadb
2024-05-03T06:25:00.2132424Z hint: Using 'master' as the name for the initial branch. This default branch name
2024-05-03T06:25:00.2134542Z hint: is subject to change. To configure the initial branch name to use in all
2024-05-03T06:25:00.2136026Z hint: of your new repositories, which will suppress this warning, call:
2024-05-03T06:25:00.2137232Z hint: 
2024-05-03T06:25:00.2138245Z hint: 	git config --global init.defaultBranch <name>
2024-05-03T06:25:00.2139089Z hint: 
2024-05-03T06:25:00.2140134Z hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
2024-05-03T06:25:00.2141664Z hint: 'development'. The just-created branch can be renamed via this command:
2024-05-03T06:25:00.2142680Z hint: 
2024-05-03T06:25:00.2143188Z hint: 	git branch -m <name>
2024-05-03T06:25:00.2154175Z Initialized empty Git repository in /home/runner/work/ya-webadb/ya-webadb/.git/
2024-05-03T06:25:00.2165223Z [command]/usr/bin/git remote add origin https://github.com/yume-chan/ya-webadb
2024-05-03T06:25:00.2221788Z ##[endgroup]
2024-05-03T06:25:00.2223392Z ##[group]Disabling automatic garbage collection
2024-05-03T06:25:00.2224771Z [command]/usr/bin/git config --local gc.auto 0
2024-05-03T06:25:00.2266215Z ##[endgroup]
2024-05-03T06:25:00.2267433Z ##[group]Setting up auth
2024-05-03T06:25:00.2268668Z [command]/usr/bin/git config --local --name-only --get-regexp core\.sshCommand
2024-05-03T06:25:00.2303310Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'core\.sshCommand' && git config --local --unset-all 'core.sshCommand' || :"
2024-05-03T06:25:00.2607654Z [command]/usr/bin/git config --local --name-only --get-regexp http\.https\:\/\/github\.com\/\.extraheader
2024-05-03T06:25:00.2638483Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'http\.https\:\/\/github\.com\/\.extraheader' && git config --local --unset-all 'http.https://github.com/.extraheader' || :"
2024-05-03T06:25:00.2879264Z [command]/usr/bin/git config --local http.https://github.com/.extraheader AUTHORIZATION: basic ***
2024-05-03T06:25:00.2913661Z ##[endgroup]
2024-05-03T06:25:00.2915491Z ##[group]Fetching the repository
2024-05-03T06:25:00.2926449Z [command]/usr/bin/git -c protocol.version=2 fetch --no-tags --prune --no-recurse-submodules --depth=1 origin +964a5377144f3eeb2d235cc44bad98ddb07386b6:refs/remotes/origin/main
2024-05-03T06:25:00.5520224Z From https://github.com/yume-chan/ya-webadb
2024-05-03T06:25:00.5521590Z  * [new ref]         964a5377144f3eeb2d235cc44bad98ddb07386b6 -> origin/main
2024-05-03T06:25:00.5593468Z ##[endgroup]
2024-05-03T06:25:00.5594715Z ##[group]Determining the checkout info
2024-05-03T06:25:00.5596381Z ##[endgroup]
2024-05-03T06:25:00.5597346Z [command]/usr/bin/git sparse-checkout disable
2024-05-03T06:25:00.5600090Z [command]/usr/bin/git config --local --unset-all extensions.worktreeConfig
2024-05-03T06:25:00.5623286Z ##[group]Checking out the ref
2024-05-03T06:25:00.5626583Z [command]/usr/bin/git checkout --progress --force -B main refs/remotes/origin/main
2024-05-03T06:25:00.5890288Z Switched to a new branch 'main'
2024-05-03T06:25:00.5891270Z branch 'main' set up to track 'origin/main'.
2024-05-03T06:25:00.5896646Z ##[endgroup]
2024-05-03T06:25:00.5929894Z [command]/usr/bin/git log -1 --format='%H'
2024-05-03T06:25:00.5951612Z '964a5377144f3eeb2d235cc44bad98ddb07386b6'
2024-05-03T06:25:00.6253957Z ##[group]Run actions/setup-node@v4
2024-05-03T06:25:00.6254488Z with:
2024-05-03T06:25:00.6254836Z   node-version: 18.x
2024-05-03T06:25:00.6255201Z   always-auth: false
2024-05-03T06:25:00.6255604Z   check-latest: false
2024-05-03T06:25:00.6256130Z   token: ***
2024-05-03T06:25:00.6256448Z env:
2024-05-03T06:25:00.6256804Z   BASE_PATH: /ya-webadb
2024-05-03T06:25:00.6257198Z ##[endgroup]
2024-05-03T06:25:00.7897974Z Found in cache @ /opt/hostedtoolcache/node/18.20.2/x64
2024-05-03T06:25:00.7912846Z ##[group]Environment details
2024-05-03T06:25:01.1552720Z node: v18.20.2
2024-05-03T06:25:01.1555075Z npm: 10.5.0
2024-05-03T06:25:01.1555688Z yarn: 1.22.22
2024-05-03T06:25:01.1556947Z ##[endgroup]
2024-05-03T06:25:01.1704559Z ##[group]Run node common/scripts/install-run-rush.js install
2024-05-03T06:25:01.1705452Z [36;1mnode common/scripts/install-run-rush.js install[0m
2024-05-03T06:25:01.1872327Z shell: /usr/bin/bash -e {0}
2024-05-03T06:25:01.1872858Z env:
2024-05-03T06:25:01.1873173Z   BASE_PATH: /ya-webadb
2024-05-03T06:25:01.1873541Z ##[endgroup]
2024-05-03T06:25:01.2340337Z The rush.json configuration requests Rush version 5.120.0
2024-05-03T06:25:01.2351036Z Transforming /home/runner/work/ya-webadb/ya-webadb/common/config/rush/.npmrc
2024-05-03T06:25:01.2352183Z   --> "/home/runner/work/ya-webadb/ya-webadb/common/temp/install-run/@microsoft+rush@5.120.0/.npmrc"
2024-05-03T06:25:01.2359167Z Installing @microsoft/rush...
2024-05-03T06:25:14.2623763Z npm WARN deprecated readdir-scoped-modules@1.1.0: This functionality has been moved to @npmcli/fs
2024-05-03T06:25:14.2629581Z npm WARN deprecated debuglog@1.0.1: Package no longer supported. Contact Support at https://www.npmjs.com/support for more info.
2024-05-03T06:25:14.3990199Z npm WARN deprecated read-package-tree@5.1.6: The functionality that this package provided is now in @npmcli/arborist
2024-05-03T06:25:17.3229141Z 
2024-05-03T06:25:17.3230192Z added 562 packages, and audited 563 packages in 16s
2024-05-03T06:25:17.3231122Z 
2024-05-03T06:25:17.3231704Z 79 packages are looking for funding
2024-05-03T06:25:17.3232507Z   run `npm fund` for details
2024-05-03T06:25:17.3313741Z 
2024-05-03T06:25:17.3314337Z 8 moderate severity vulnerabilities
2024-05-03T06:25:17.3314769Z 
2024-05-03T06:25:17.3315068Z To address all issues, run:
2024-05-03T06:25:17.3315925Z   npm audit fix --force
2024-05-03T06:25:17.3316356Z 
2024-05-03T06:25:17.3316745Z Run `npm audit` for details.
2024-05-03T06:25:17.3715979Z Successfully installed @microsoft/rush@5.120.0
2024-05-03T06:25:17.3718324Z 
2024-05-03T06:25:17.3718834Z Invoking "rush install"
2024-05-03T06:25:17.3719645Z -----------------------
2024-05-03T06:25:17.3720083Z 
2024-05-03T06:25:17.6170549Z Found configuration in /home/runner/work/ya-webadb/ya-webadb/rush.json
2024-05-03T06:25:17.6173315Z 
2024-05-03T06:25:17.6208963Z 
2024-05-03T06:25:17.6210193Z [1mRush Multi-Project Build Tool 5.120.0[33m[39m[22m[36m - https://rushjs.io[39m
2024-05-03T06:25:17.6211413Z Node.js version is 18.20.2 (LTS)
2024-05-03T06:25:17.6212013Z 
2024-05-03T06:25:17.6225871Z 
2024-05-03T06:25:17.8110138Z Starting "rush install"
2024-05-03T06:25:17.8110526Z 
2024-05-03T06:25:17.8540127Z Validating package manager shrinkwrap file.
2024-05-03T06:25:17.8540692Z 
2024-05-03T06:25:17.9107861Z Creating /home/runner/.rush/node-v18.20.2
2024-05-03T06:25:17.9109744Z Trying to acquire lock for pnpm-8.15.6
2024-05-03T06:25:17.9193350Z Acquired lock for pnpm-8.15.6
2024-05-03T06:25:17.9195731Z [1mInstalling pnpm version 8.15.6
2024-05-03T06:25:17.9196429Z [22m
2024-05-03T06:25:17.9206376Z Transforming /home/runner/work/ya-webadb/ya-webadb/common/config/rush/.npmrc
2024-05-03T06:25:17.9207334Z   --> "/home/runner/.rush/node-v18.20.2/pnpm-8.15.6/.npmrc"
2024-05-03T06:25:17.9210684Z 
2024-05-03T06:25:17.9211464Z Running "npm install" in /home/runner/.rush/node-v18.20.2/pnpm-8.15.6
2024-05-03T06:25:18.9151944Z 
2024-05-03T06:25:18.9153090Z added 1 package, and audited 2 packages in 821ms
2024-05-03T06:25:18.9155582Z 
2024-05-03T06:25:18.9156222Z 1 package is looking for funding
2024-05-03T06:25:18.9157251Z   run `npm fund` for details
2024-05-03T06:25:18.9164822Z 
2024-05-03T06:25:18.9165211Z found 0 vulnerabilities
2024-05-03T06:25:18.9273474Z Successfully installed pnpm version 8.15.6
2024-05-03T06:25:18.9278502Z 
2024-05-03T06:25:18.9279597Z Symlinking "/home/runner/work/ya-webadb/ya-webadb/common/temp/pnpm-local"
2024-05-03T06:25:18.9280380Z   --> "/home/runner/.rush/node-v18.20.2/pnpm-8.15.6"
2024-05-03T06:25:18.9433140Z Transforming /home/runner/work/ya-webadb/ya-webadb/common/config/rush/.npmrc
2024-05-03T06:25:18.9434724Z   --> "/home/runner/work/ya-webadb/ya-webadb/common/temp/.npmrc"
2024-05-03T06:25:18.9503355Z 
2024-05-03T06:25:18.9504979Z [1mUpdating workspace files in /home/runner/work/ya-webadb/ya-webadb/common/temp[22m
2024-05-03T06:25:18.9833517Z Copying "/home/runner/work/ya-webadb/ya-webadb/common/config/rush/pnpm-lock.yaml"
2024-05-03T06:25:18.9834383Z   --> "/home/runner/work/ya-webadb/ya-webadb/common/temp/pnpm-lock.yaml"
2024-05-03T06:25:18.9840428Z Copying "/home/runner/work/ya-webadb/ya-webadb/common/config/rush/pnpm-lock.yaml"
2024-05-03T06:25:18.9841600Z   --> "/home/runner/work/ya-webadb/ya-webadb/common/temp/pnpm-lock-preinstall.yaml"
2024-05-03T06:25:18.9845174Z 
2024-05-03T06:25:18.9848599Z [33mThe shrinkwrap file (pnpm-lock.yaml) contains the following issues:[39m
2024-05-03T06:25:18.9849396Z 
2024-05-03T06:25:18.9850412Z [33m  Dependencies of project "@yume-chan/scrcpy" do not match the current shrinkwrap.[39m
2024-05-03T06:25:18.9851309Z 
2024-05-03T06:25:18.9852523Z The shrinkwrap file (pnpm-lock.yaml) is out of date. You need to run "rush update".
2024-05-03T06:25:18.9998618Z ##[error]Process completed with exit code 1.
2024-05-03T06:25:19.0105041Z Post job cleanup.
2024-05-03T06:25:19.0799516Z [command]/usr/bin/git version
2024-05-03T06:25:19.0837027Z git version 2.43.2
2024-05-03T06:25:19.0875057Z Temporarily overriding HOME='/home/runner/work/_temp/cffaab82-dff4-44b3-a043-8dca0911e6e8' before making global git config changes
2024-05-03T06:25:19.0877087Z Adding repository directory to the temporary git global config as a safe directory
2024-05-03T06:25:19.0880494Z [command]/usr/bin/git config --global --add safe.directory /home/runner/work/ya-webadb/ya-webadb
2024-05-03T06:25:19.0912117Z [command]/usr/bin/git config --local --name-only --get-regexp core\.sshCommand
2024-05-03T06:25:19.0941251Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'core\.sshCommand' && git config --local --unset-all 'core.sshCommand' || :"
2024-05-03T06:25:19.1164192Z [command]/usr/bin/git config --local --name-only --get-regexp http\.https\:\/\/github\.com\/\.extraheader
2024-05-03T06:25:19.1182580Z http.https://github.com/.extraheader
2024-05-03T06:25:19.1195616Z [command]/usr/bin/git config --local --unset-all http.https://github.com/.extraheader
2024-05-03T06:25:19.1220658Z [command]/usr/bin/git submodule foreach --recursive sh -c "git config --local --name-only --get-regexp 'http\.https\:\/\/github\.com\/\.extraheader' && git config --local --unset-all 'http.https://github.com/.extraheader' || :"
2024-05-03T06:25:19.1706934Z Cleaning up orphan processes